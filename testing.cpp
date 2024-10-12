#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;
int main() {
    // int temp[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };
    vector<vector<int>> a(3,vector<int>(3,10));
    vector<int> b={1,2,3,4};

    // b.push_back(1);
    // a.push_back(b);
    b[0]=5;
    // a.push_back(b);
// int b=3;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    // cout<< temp;
}