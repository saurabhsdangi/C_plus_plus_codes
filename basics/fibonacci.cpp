#include<iostream>
using namespace std;

int main(){
    int a= 0,b= 1;
    int n=10;
    cout<<a<<" "<<b<<" ";
    int nxt;
    for(int i=0;i<n;i++){
        nxt= a+b;
        cout<<nxt<<" ";
    a=b;
    b= nxt;
    }
    
}
