#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    string str;
    // getline(cin,str);
    // str[5]= '\0';
    // cout<<str;

    // cin>>str;

    // getline(cin,str);
    // cout<<str;

    // cin.get(str,20); // cin.get not for strings //
    char arr[20];
    cin.get(arr,20);
    arr[3]= '\0';
    // cin>>arr;
    cout<<arr;

    // int len= strlen(arr);
    // for(int i=0;i<len;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<len;i++){
    //     cout<<arr[i];
    // }
}