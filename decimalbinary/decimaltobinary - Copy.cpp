#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,digit,bin=0,pow=1;
    cin>>n;
    while(n>0)
    {
        digit= n%2;
        bin+= digit*pow;
        pow*= 10;
        n=n/2;
    }
    cout<<bin;
    // int n;
    // cin>>n;
    // int ans= 0;
    // int i= 0;
    // while(n!=0){
    //     int bit= n & 1;
    //     // int dig= bit% 10;
    //     ans= ans+ (bit * pow(10,i));
    //     n= n>>1;
    //     i++;   
    // }
    // cout<< ans;
}