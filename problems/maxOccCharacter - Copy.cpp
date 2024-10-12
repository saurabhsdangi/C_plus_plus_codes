#include<iostream>
#include<string>
using namespace std;

char maxOccCharacter(string s){
    int arr[26]= {0};
    for(int i=0;i<s.length();i++){
        int number= 0;
        if(s[i]>= 'a' && s[i]<= 'z'){
        number= s[i]- 'a';
        }
        else{
        number= s[i]- 'A';
        }
        arr[number]++;
    }

    int maxi= -1, ans= 0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans= i;
            maxi= arr[i];
        }
    }
    char maxChar= 'a' + ans;
    return maxChar;

}

int main(){
    string str;
    getline(cin,str);
    // char maxChar= maxOccCharacter(str);
    cout<<maxOccCharacter(str);
}