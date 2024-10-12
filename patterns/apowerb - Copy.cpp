#include<iostream>
using namespace std;
int main()
{
  int a,b,res=1;
  cin>>a>>b;
  for(int i=1;i<=b;i++)
  {
    res= res*a;
  }
  cout<<res;
}
