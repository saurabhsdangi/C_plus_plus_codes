#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int *ele){
    for(int i= 0;i<n;i++){
        if(arr[i]== *ele){
           cout<<"Element found";
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
    int x;
    cout<<"\nEnter element to search in array:";
    cin>>x;
    linearSearch(arr, size, &x);
}
