#include<iostream>
#include<cstring>
#include<string>
using namespace std;
bool recPalin(string str, int i , int j){
    if(i>j)
    return true;
    if(str[i]!= str[j])
    return false;
    else{
     return recPalin(str,i+1 ,j-1);
    }
}
int main(){
    string str= "abcba";
    int len= str.length();
    bool check= recPalin(str,0, str.length()-1);
    if(check)
        cout<<"Palindrome!!";
    else
    cout<<"Not a Palindrome";
}