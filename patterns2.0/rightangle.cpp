#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        if(i>n-1){
         for(int j=2*n-i;j>0;j--){
            cout<<"*";
        }
        }
        cout<<endl;
    }

    
}