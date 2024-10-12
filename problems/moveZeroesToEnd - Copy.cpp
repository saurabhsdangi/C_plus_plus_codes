#include<iostream>

using namespace std;

void moveZeroesToEnd(int arr[], int x){
int nonZero= 0;
    for(int j=0;j<x;j++){
        if(arr[j]!= 0){
        swap(arr[j],arr[nonZero]);
        nonZero++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of an array:";
    cin>>n;
    int a[n];
    cout<<"Array is:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // cout<<endl;

    moveZeroesToEnd(a,n);

   cout<<"Resultant array is:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}