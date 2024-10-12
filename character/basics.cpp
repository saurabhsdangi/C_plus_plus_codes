#include<iostream>
using namespace std;
char toLowercase(char ch){
    if(ch>= 'a' && ch<= 'z'){
      return ch;
    }
    else{
    char temp= ch- 'A' + 'a';
    return temp;
    }
}
bool checkPalindrome(char name[], int n){
    int start= 0, end= n-1;
    while(start<= end){
         if(toLowercase(name[start])== toLowercase(name[end])){
            start++;
            end--;
         }
         else 
         return false;
    }
    return true;
    }

    char* reverseString(char name[], int n){
    int start= 0, end= n- 1;
    while(start<= end){
    swap(name[start], name[end]);
    start++;
    end--;
}
return name;
}

int getLength(char name[]){
int i= 0;
int count= 0;
while(name[i]!= '\0'){
    count++;
    i++;
}
return count;
}

int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    cout<<name<<endl;

    int length= getLength(name);
    cout<<"Length: "<<length<<endl;

   char* reverse= reverseString(name, length);
  cout<<"Reversed String: "<<reverse<<endl;

  cout<<"Palindrome or not: "<<checkPalindrome(name,length);

}
