#include<iostream>
using namespace std;

void passf(int *p){
    cout<<*p<<endl;
}

 void update(int *p){
    p= p+ 1;
 }

void updateValue(int *p){
    *p= *p + 1;
}

int getSum(int *arr, int n){     
    // *arr = arr[];
    int sum= 0;
    cout<<"Size of arr: "<<sizeof(arr)<<endl;
    for(int i= 0;i<n;i++){
        sum+= arr[i];
    }
    return sum;
}
int main(){
    int val= 5;
    int *p= &val;
    passf(p);
    update(p);
    cout<<*p<<endl;
    updateValue(p);
    cout<<*p<<endl;

    int arr[5]= {1,2,3,4,5};
    cout<<"Sum is: "<<getSum(arr,5);
}