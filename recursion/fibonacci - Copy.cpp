#include<iostream>
using namespace std;

int fibonacci(int n){
if(n==1)
    return 0;

if(n== 2)
   return 1;

   return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter the number place of fibonacci no.:";
    cin>>n;
    cout<<"Fibonacci no. is:";
    int fibo= fibonacci(n);
    cout<<fibo;
}