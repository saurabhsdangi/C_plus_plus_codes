#include<iostream>
using namespace std;

int  factorial(int n){
    // base case
    if(n== 0)
        return 1;
    
    //int fact= factorial(n-1);
    //int f= n* fact;
    //return f;
    
    // recursive call
    return n * factorial(n-1);
}

int main(){
int n;
cout<<"Enter a number:";
cin>>n;
cout<<"Factorial of number:";
// int fact= factorial(n);
// cout<< fact;
cout<<factorial(n);
}
