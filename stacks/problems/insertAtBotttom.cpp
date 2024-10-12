#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void insertBottom(stack<int> &s,int size,int data){
//   base case
     if(s.empty()){
        s.push(data);
        return;
     }

    int num= s.top();
    s.pop();

    insertBottom(s,size,data);
    s.push(num);
}
 
 void printStack(stack<int> s){
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
     }
     cout<<endl;
 }

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    printStack(s);
    int size= s.size();
    int data= 5;
    insertBottom(s,size,data);
    printStack(s);
}