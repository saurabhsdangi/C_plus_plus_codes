#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    for(int i= size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int arr[n];
cout<<"Enter elements of an array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Array is:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<"\nReverse array is:";
reverseArray(arr, n);
}