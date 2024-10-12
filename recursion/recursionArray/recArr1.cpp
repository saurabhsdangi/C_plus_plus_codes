#include<iostream>
using namespace std;
bool boolSorted(int arr[], int size){
if(size== 0 || size== 1){
    return true;  
}
if(arr[0]>arr[1]){
    return false;
}
else{
   bool remSorted= boolSorted(arr + 1, size -1 );
   return remSorted;
}
}

int main(){
    int arr[5]= {1,3,5};
    int size= 3;
    bool ans= boolSorted(arr, size);
    if(ans){
        cout<<"Array is Sorted";
    }
    else
    cout<<"Array is not Sorted";
}