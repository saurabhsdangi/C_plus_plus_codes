#include<iostream>
using namespace std;
int binaryRec(int arr[], int size, int k, int start,int end){
    if(start> end)
    return 0;
    
    int mid= start + (end- start)/2;   

    if(k== arr[mid])
    return mid;

    else if(k< arr[mid]){ 
        return binaryRec(arr, size, k, start, mid-1);
    }

    else{
        return binaryRec(arr, size, k, mid+1, end);
    }
}

int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
     int size= 10;
   
    int k= 100;
    int ans= binaryRec(arr,size,k,0,9);
    
    if(ans== 0)
    cout<<"Element not FOUND";
    else
    cout<<"Element found at index: "<<ans;
    // if(ans){
    //     cout<<"Element fOUND";
    // }
    // else
    // cout<<"Element not found";
}