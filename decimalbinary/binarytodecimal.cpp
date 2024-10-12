#include<iostream>
using namespace std;
int main()
{
    int n,lastdigit,dec=0,pow=1;
    cin>>n;
    while(n>0)
    {
      lastdigit= n%10;
      dec+= lastdigit*pow;
      pow*= 2;
      n=n/10;
    }
    cout<<dec;
}