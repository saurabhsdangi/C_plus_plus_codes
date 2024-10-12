#include<iostream>
using namespace std;
int main(){
    string str= "Saurabh";
    string str1= "ur";
    str.append(str1, 1, 3);
    cout<<str<<endl;
    str.append(str1.begin(), str1.begin()+ 3);
    cout<<str<<endl;

    string str2= str.find(str1);
 
    str.erase(str.find(str1), str1.length());
    cout<<str;
}