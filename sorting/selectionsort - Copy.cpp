#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min= i;
        for(int j= i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min= j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main(){
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array:";
    for(int i= 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array is:\n";
    for(int i= 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    selectionSort(arr, size);

    cout<<"\nSorted array is:\n";
    for(int i= 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}