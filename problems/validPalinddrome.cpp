#include<iostream>
#include<string>
using namespace std;
int valid(char ch){
    if((ch>='a'&& ch<= 'z')  || (ch>='A'&& ch<= 'Z') || (ch>='0'&& ch<= '9'))
    return 1;
    else
    return 0;
}

char toLowerCase(char ch){
    if((ch>='a'&& ch<= 'z') || (ch>='0'&& ch<= '9'))
    return ch;
    else{
    char temp= ch-'A' + 'a';
    return temp;
    }
}

void reverse(string name,int len){
    int s= 0,e= len-1;
    while(s<=e){
        swap(name[s],name[e]);
}
}
bool checkPalindrome(string name, int len){
    int s=0,e= len-1;
    while(s<=e){
        if(name[s]!= name[e])
        return 0;
        else{
        s++;
        e--;
    }
    }
}

string isPalindrome(string name){
    string temp= "";
    for(int i=0;i<name.length();i++){
        if(valid(name[i]))
        temp.push_back(name[i]);
    }
    for(int i=0;i<name.length();i++){
    temp[i]= toLowerCase(temp[i]);
    }
    return temp;
}

int main(){
    string str;
    getline(cin,str);

    int length= str.length();

    // reverse(str,length);

    str= isPalindrome(str);

    if(checkPalindrome(str,length)){
       cout<<"A Palindrome!!";
    }
    else
    cout<<"Not a Palindrome!!";
}