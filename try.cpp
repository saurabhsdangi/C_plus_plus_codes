#include<iostream>
#include<string.h>
using namespace std;

string removeDuplicates(string s) {
        int i =0;
        while(i<s.length()){
            if(s.length() == 1){
                return s;
            }
            cout << "Hui" << endl;
            if(i < 0){
                i = 0;
            }
            if(s[i] == s[i+1]){
                cout << "Hey" << i << endl;
                s.erase(i,2);
                i--;
            }
            else{
                cout << "Hello" << i << endl;
                i++;
            }
            // if(i < 0){
            //     i = 0;
            // }

        }
        return s;
    }

int main(){
    string str;
    cout << "Enter str: ";
    getline(cin , str);
    str = removeDuplicates(str);
    cout << str << endl;

    return 0;
}


