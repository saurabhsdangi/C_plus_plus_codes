#include<iostream>
using namespace std;
// default argurments are used from in right to left order and in case 
// when a user don't pass any value for a given arguement, the default arguement set in function defintion is used
void printArr(int arr[], int n , int start= 0){
    for(int i= start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]= {1,2,3,4,5};
    int n =5;
    // int start= 2;
    printArr(arr, n);
}