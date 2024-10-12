#include<iostream>
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
}