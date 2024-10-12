#include<iostream>
using namespace std;

void sumarr(int arr[], int n){
    int sum= 0;
    for(int i=0;i<n;i++){
       sum= sum+ arr[i];
    }
    cout<<"\nSum is:";
    cout<<sum;
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
    sumarr(arr, size);
}
