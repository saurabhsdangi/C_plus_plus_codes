#include<iostream>
#include<stack>
using namespace std;

int minCost(string str){
    if(str.length() % 2== 1){
        return -1;
    }

    stack<int>s;
    for(int i=0;i<str.length();i++){
        char ch= str[i];
        if(ch== '{'){
        s.push(str[i]);
    }
    else{
        // ch is a closed brace
        if(!s.empty() && s.top()== '{'){
            s.pop();
        }
        else{
            s.push(ch);
        }
    }
    }
    // stack contains invalid expresssion now
    int a= 0, b= 0;
    while(!s.empty()){
          char ch= s.top();
          if(ch== '{')
          a++;
          else{
            b++;
          }
        s.pop();
    }
    int ans= (a+1)/2 + (b+1)/2;
    return ans;
}

int main(){
    string str;
    // str.push_back('{');  
    // str.push_back('{');  
    // str.push_back('{');  
    // str.push_back('{');  
    // str.push_back('{');  
    // str.push_back('{');  
    str.push_back('}');  
    str.push_back('}');  
    str.push_back('{');  
    str.push_back('}');  
    str.push_back('}');  
    str.push_back('}');  
    cout<<str<<endl;
    int min = minCost(str);
    cout<<"Min cost to valid stack: "<<min;
}