#include<iostream>
using namespace std;

int binary(int arr[], int size, int key){
    int start= 0, end= size-1;

    // int mid= (start + end)/2;
    int mid= start + (end-start)/2;

    while(start<=end){
        if(arr[mid]== key)
        return mid;
        else if(arr[mid]<key)
        start= mid+1;
        else{
        end= mid-1;
        }
        mid= start + (end- start)/2;
    }
    return -1;
}
int main(){
    int arr[]= {1,2,3,4,5};
    // for(int i=0;i<n;i++){
    //     cin>>n;
    // }
    int index= binary(arr, 5, 3);
    cout<<"Index of 3 is: "<<index;
}
 