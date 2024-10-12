#include<iostream>
using namespace std;

bool checkPalindrome(char nam[], int n){
    int s= 0, e= n-1;
    while(s<=e){
        if(nam[s]!= nam[e]){
        return 0;
        }
        else{
        s++;
        e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s=0, e= n- 1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
int count= 0;
for(int i=0;name[i]!= '\0';i++){
    count++;
}
return count;
}

int main(){
    char name[20];
    cin>>name;
    // name[2]= '\0';

    cout<<name<<endl;
    
    int length= getLength(name);

    // string reversed= reverse(name, length);
    cout<<name<<endl;

    cout<<length<<endl;
    cout<<"Palindrome or not:";
    if(checkPalindrome(name, length))
    cout<<"Palindrome";
    else
    {
        cout<<"Not Palindrome";
    }

    // to Check Palindrome
    // for(int i=0;name[i]!= '\0';i++){
    //     if(name[i]== reversed[i])
    // }
    // cout<<"A Palindrome!!";
}