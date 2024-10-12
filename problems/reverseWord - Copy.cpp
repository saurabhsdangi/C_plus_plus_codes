#include<iostream>
#include<cstring>
#include<string>
using namespace std;

void reverse(char str[], int s, int e){
    while(s<e){
        swap(str[s++], str[e--]);
    }
}

int main(){
    char str[]= "SARU IS GOAT";
    //reverse(str,start,end-1); 
    // cin.get(str,50);
    int start= 0, end= 0;
    reverse(str,start,strlen(str)-1);
    while(end<strlen(str)){
        for(end= start;end<strlen(str) && str[end]!= ' ';end++){
        }
            reverse(str,start,end-1);  
        //   cout<<str<<endl;
        
          start= end+1;  
    }
    cout<<str;
}