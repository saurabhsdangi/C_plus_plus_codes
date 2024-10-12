#include<iostream>
using namespace std;

void duplicate(int arr[], int n){
     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]== arr[j])
            break;            
        }
     }
    cout<<"\nDuplicate element found!!";
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
   duplicate(arr, size);
}