#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compress(vector<char>& s, int len){
    int i=0;
    int ansIndex= 0;
    // int n= s.size();

    while(i<len){
        int j=i+1;
        while(j<len && s[i]== s[j]){
            j++;
        }
        s[ansIndex]= s[i];
        int count= j-i;
        if(count>1){
            string cnt= to_string(count);
            for(char ch: cnt){
                s[ansIndex++]= ch;
            }
        }
        i=j;
    }
    return ansIndex;
}

int main(){
    vector<char> chars;
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('c');
    int length= chars.size();
    int count= compress(chars,length);   
    cout<<count; 
}