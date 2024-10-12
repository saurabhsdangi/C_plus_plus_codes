#include<iostream>
using namespace std;

int insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp= arr[i];
        int j= i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]= arr[j];
            }
            else
            break;
        }
        arr[j+1]= temp;
    } 
}

int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array is:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    insertionSort(arr, size);

    cout<<"\nSorted array is:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}