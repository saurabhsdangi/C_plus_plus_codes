#include<iostream>
using namespace std;

void merge(int a1[],int x, int a2[], int y, int a3[]){
    int i= 0, j=0;
    int k=0;
    while(i<x && j<y){
        if(a1[i] < a2[j]){
            a3[k]= a1[i];
            i++;
            k++;
        }
        else{
             a3[k]= a2[j];
             j++;
             k++;
        }
    }
    while(i<x){
        a3[k]= a1[i];
        i++;
        k++;
    }
    while(j<y){
        a3[k]= a2[j];
        j++;
        k++;
    }
}
int main() {
    int n;
    cout<<"Enter size of array 1:\n";
    cin>>n;
    int arr1[n];
    cout<<"Sorted array 1:\n";
    for(int i=0;i<n;i++){
       cin>>arr1[i];
    }

    int m;
    cout<<"Enter size of array 2:\n";
    cin>>m;
    int arr2[m];
    cout<<"Sorted array 2:\n";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int p= m+n;
    int arr3[p];
    
    merge(arr1, n, arr2, m, arr3);

    cout<<"Merged sorted array is:\n";
    for(int i=0;i<p;i++){
        cout<<arr3[i]<<" ";
    }

}