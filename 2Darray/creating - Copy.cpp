#include<iostream>
using namespace std;
// bool search(int a[][4], int targ, int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             if(a[i][j]== targ){
//                 return 1;
//             }
        
//         }
//     }
//     return 0;
// }
int main()
{
    // creating a 2D array
    int a[3][4];
    // int a[3][4]= {1,2,3,4,5,6,7,8,9,2,3,4}; // initialising elements will print in row-wise format //
    // int a[3][4]= {{1,2,3,4},{3,4,5,6},{6,7,8,9}};

    // taking input in a 2D array-> row-wise input
    // cout<<"Enter elements as row wise input:\n";
    // for(int row=0;row<3;row++)
    // {
    //     for(int col=0;col<4;col++)
    //     {
    //         cin>>a[row][col];
    //     }
    // }

   // taking input -> column-wise input
   cout<<"Enter elements as column wise input:\n";
    for(int col=0;col<4;col++)
    {
        for(int row=0;row<3;row++)
        {
            cin>>a[row][col];
        }
    }

    // printing 2D array
    cout<<"Array in row wise manner:\n";
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }

//     //linear search
//     int targ;
//     cout<<"Enter an element to search"<<endl;
//     cin>>targ;
//     if (search(a, targ, 3, 4))
//     cout<<"Target found";
//     else
//     cout<<"Target not found";

}
