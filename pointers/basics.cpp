#include<iostream>
using namespace std;

int main(){
    int num= 10;

    int *p = &num;

    cout<<p<<endl;
    cout<<*p<<endl;
 
    int *q;
    q= &num;
    cout<<q<<endl;
    cout<<*q<<endl;

   int a= num;
   cout<<++a<<endl;
   cout<<*p<<endl;

   int b= *p;
   cout<<++b<<endl;
   cout<<*p<<endl;

    (*p)++;
   cout<<num<<endl;

//    copying a pointer
   int *x= p;
   cout<<x<<" "<<q<<endl;
   cout<<*x<<" "<<*q<<endl;

   cout<<p<<endl;
   p= p+ 1;
   cout<<p<<endl;
   
}