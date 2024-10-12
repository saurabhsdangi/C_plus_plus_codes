#include<iostream>
#include<cstring>
#include<string>
#include<vector>
using namespace std;

int main(){
    // string str;
    // getline(cin,str);
    // str[5]= '\0';
    // cout<<str;

    // cin>>str;

    // getline(cin,str);
    // cout<<str;

    // cin.get(str,20); // cin.get not for strings //
    // char arr[20];
    // cin.get(arr,20);
    // cin>>arr;
    // arr[3]= '\0';
    // cout<<arr;
    string a="hello";
    char b[]="hello";
    cout<<a.length()<<'\n';
    cout<<sizeof(b)<<'\n';
    cout<<strlen(b)<<'\n';

vector<vector<int>> arr={{1},{1,2,3},{6,7}};
int size[]={1,3,2};
for(int i=0;i<3;i++)
{
    for(int j=0;j<size[i];j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<'\n';
}



    // int len= strlen(arr);
    // for(int i=0;i<len;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<len;i++){
    //     cout<<arr[i];
    // }
}