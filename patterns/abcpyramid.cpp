#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
 
  for(int i=1;i<=n;i++)
  {
    for(int j=n-i;j>=1;j--)
    {
        cout<<" ";
    }
    char ch='A';
      int breakpoint= (2*i-1)/2;
    for(int j=1;j<=2*i-1;j++)
    { 
      cout<<ch;
      if(j<=breakpoint)
        ch++;
      else
       ch--;
      }
      
    // {
    //   cout<<(char)(a+j);
    // }

    // for(int j=i-1;j>=1;j--){
    //     cout<<(char)(a+j);
    // }
    cout<<endl;
  }
}