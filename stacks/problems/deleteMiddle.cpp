#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void deleteMiddle(stack<int>& s,int count, int size){
//  base case
    if(count== size/2){
      s.pop();
      return;
    }
    int num= s.top();
    s.pop();
   
//    recursive call
    deleteMiddle(s,++count,size);
    s.push(num);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int count= 0;
    int size= s.size();

    deleteMiddle(s,count,size);

    while(!s.empty()){
     cout<<s.top()<<" ";
     s.pop();
    }
}