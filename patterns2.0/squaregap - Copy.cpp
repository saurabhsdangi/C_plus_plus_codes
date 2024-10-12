#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i< n/2){
            for(int j=n/2- i;j>=1;j--)
            {
                cout<<"*";
            }
            for(int j=0;j<=2*i-1;j++){
                cout<<" ";
            }
            for(int j=n/2- i;j>=1;j--){
                cout<<"*";
            }
        }
        if(i>= n/2){
            int m= i- n/2;
          for(int j=0;j<=m;j++)
            {
                cout<<"*";
            }
            for(int j=n-2*m-2;j>=1;j--){
                cout<<" ";
            }
            for(int j=0;j<=m;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}