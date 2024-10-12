#include<iostream>
using namespace std;
void recSort(int arr[], int n){
    if(n== 0 || n== 1){
        return;
    }
    for(int i= 0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    recSort(arr, n-1);
}
int main(){
    int arr[5]= {10,9,8,7,6};
    int size= 5;
    recSort(arr,size);
    for(int i= 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}