#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // int n,lastdigit,dec=0,pow=1;
    // cin>>n;
    // while(n>0)
    // {
    //   lastdigit= n%10;
    //   dec+= lastdigit*pow;
    //   pow*= 2;
    //   n=n/10;
    // }
    // cout<<dec;
    int n;
    cin>>n;
    int ans= 0;
    int i= 0;
    while(n!=0){
      int dig = n%10;
      if(dig== 1){
      // int bit = n&1;
      ans= ans + pow(2,i);
      }
      i++;
      n/10;
    }
    cout<<ans;
}