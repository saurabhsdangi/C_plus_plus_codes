#include<iostream>
using namespace std;
// inline function is used when a function compile code is less than 3 lines or usually single line 
// the inline function replaces function calls with the line itself to avoid function calls before the compile time
// no extra memory usage and no function calling hits improves performance
inline int func(int& a, int& b){
int ans= 0;
ans= (a>b)? a:b;
return ans;
}

int main(){
    int a= 1;
    int b= 2;
    func(a,b);
    cout<<func(a,b);

    a= a+ 2;
    func(a,b);
    cout<<func(a,b);
}