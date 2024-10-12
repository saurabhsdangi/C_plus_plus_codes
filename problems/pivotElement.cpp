#include<iostream>
using namespace std;
int pivotElement(int* arr, int n){
    // int s= 0, e= n-1;
    // while(s<=e){
    //   int mid= s + (e-s)/2;
    //   if(arr[mid-1]> arr[mid+1] && arr[mid-1]> arr[mid])
    //   return mid;
    //   else
    //   s= mid + 1;
    // }
    // return -1;
    
        int start=0;
        int end= n-1;
        while(start<=end){
        int mid=start+(end-start)/2;
        if( mid<end && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(  mid>start && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[start]>=arr[mid]){
            end=mid-1;
        }
        if(arr[start]<arr[mid]){
            start=mid+1;
        }
  
       }
         return -1;
}
int main(){
   int arr[5]= {1};
    cout<< "Pivot element at index: "<< pivotElement(arr, 5);

}