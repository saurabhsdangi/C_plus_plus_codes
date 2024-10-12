#include<iostream>
#include<stack>
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

void reverse(stack<int> & s){
// base case
    if(s.empty()){
        return;
    }
    
    int num= s.top();
    s.pop(); 
    
    // recursive call
    reverse(s);

    insertBottom(s,s.size(),num);
}

void print(stack<int> s){
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
    print(s);  
    reverse(s);
    print(s);
}
