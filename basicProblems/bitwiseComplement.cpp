#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m= n;
    int comp;
    int mask= 0;
    if(n== 0)
    comp= 1;
    while(m!=0){

        mask= mask<<1 | 1;
        m= m>>1;
    }
    comp= mask & (~n);
    cout<<comp;
}