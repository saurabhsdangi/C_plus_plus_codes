#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact=1;
    int i=1;
    while(i<=n)
    {
      fact= fact*i;
      i++;
    cout<<fact<<endl;
    }
    

// for(int i=1;i<=n;i++)
// {
//     fact*=i;
//     cout<<fact<<endl;
// }
}