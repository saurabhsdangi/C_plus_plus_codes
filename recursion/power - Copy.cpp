#include<iostream>
using namespace std;

int power(int n){
    int pow= 2;
//   base case
   if(n== 0)
    return 1;
   
   return 2* power(n-1);
}
int main(){
    int n;
    cin>>n; 

    int ans= power(n);
    cout<<ans;
}