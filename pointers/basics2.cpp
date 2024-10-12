#include<iostream>
using namespace std;

int main(){
    int arr[5]= {1,2,3,4,5};
    cout<<&arr<<endl; 
    cout<<&arr[0]<<endl; 
    cout<<&arr + 2<<endl;  
    cout<<*arr<<endl; 
    cout<<*arr + 2<<endl;  
    cout<<arr[2]<<endl;  
    cout<<2[arr]<<endl;  
    cout<<*(arr + 2)<<endl;  // arr(i)= *(arr + i)

    int temp[10]= {1,2,3,4};
    int *p = &temp[0];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;

    cout<<&temp<<endl;
    cout<<&p<<endl;

    // temp= temp + 1;
    p= p + 1;
    cout<<*p<<endl;

   char ch[6]= "abcde";
   cout<<ch<<endl;

   char* c= &ch[0];
   cout<<c<<endl;

   char s= 'z';
   cout<<s<<endl;
}