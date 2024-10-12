#include<iostream>
using namespace std;
int main()
{
    int a[3][4];
    cout<<"Enter elements of array:";
    for(int row=0;row<3;row++)
    
        {
            for(int col=0;col<4;col++)
            {
                cin>>a[row][col];
            }
        }

         cout<<"Array is:\n";
         for(int row=0;row<3;row++)
        {
            {
                for(int col=0;col<4;col++)
                cout<<a[row][col]<<" ";
            }
            cout<<endl;
        }
    
    cout<<"Wave print array is:"<<endl;
            for(int col=0;col<4;col++)
            {
                if(col%2== 0)
                {
                    for(int row=0;row<3;row++)
                    {
                       cout<<a[row][col]<<" ";                 
                    }
                    
                }
                    else 
                {
                    for(int row=2;row>=0;row--)
                    {
                        cout<<a[row][col]<<" ";
                    }
                    
                }
                cout<<endl;
               
            }
}
            
