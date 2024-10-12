#include<iostream>
using namespace std;

void swapalt(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1< n)
        swap(arr[i],arr[i+1]);
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
    cout<<"Array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    swapalt(arr, size);
    cout<<"\nSwapped alternate array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}