#include<iostream>
using namespace std;
void sumrow(int a[][4], int n, int m)
{
  cout<<"Sum row wise:"<<endl;
  for(int i=0;i<n;i++)
  {
    int sum= 0;
    for(int j=0;j<m;j++){
        sum+= a[i][j];
        
    }
    cout<<sum<<" ";
  }
  cout<<endl;
}
int main()
{
    int a[3][4];
    cout<<"Give input elements:"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>a[row][col];
        }
    }
    
    cout<<"Array:"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }

    sumrow(a,3,4);

}