#include<iostream>
using namespace std;

bool bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool flag= false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            bool flag= true;
        }
         if(flag== false){
        break;
    }
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

    bubbleSort(arr, size);

    cout<<"\nSorted array is:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}