#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int isPrime;
    for(int i=2;i<n;i++){
        if(n%i== 0){
            cout<<"Not a Prime Number";
            isPrime= 0;
            break;
        }
    }
    if(isPrime== 0){
         cout<<"Not a Prime number";
    }
         else{
         cout<<"Prime number";
    }
}
