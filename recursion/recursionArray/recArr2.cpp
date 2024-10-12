#include<iostream>
using namespace std;
int getSum(int arr[], int size){
if(size== 0){
    return 0;  
}
if(size== 1){
    return arr[0];
}

int remPart= getSum(arr + 1, size - 1);
int sum= arr[0] + remPart;
return sum;
}

int main(){
    int arr[5]= {1,3,5};
    int size= 3;
    int sum= getSum(arr, size);
    cout<<"Sum is: "<<sum;
    }