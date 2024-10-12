#include<iostream>
using namespace std;
int main()
{
    int a[3][4];
    cout<<"Enter elements of array:"<<endl;
    for(int row=0;row<3;row++)
        {
            for(int col=0;col<4;col++){
                cin>>a[row][col];
            }
        }
    
    cout<<"Array is:"<<endl;
     for(int row=0;row<3;row++)
        {
            for(int col=0;col<4;col++){
                cout<<a[row][col]<<" ";
            }
            cout<<endl;
        }
    cout<<" Wave print array is:"<<endl;
            for(int row=0;row<3;row++)
            {
                if(row%2== 0)
                {
                    for(int col=0;col<4;col++)
                    {
                        cout<<a[row][col]<<" ";                 
                    }
                }
                    else
                    for(int col=3;col>=0;col--)
                    {
                        cout<<a[row][col]<<" ";
                    }
                    cout<<endl;
                    
            }
}
            


    