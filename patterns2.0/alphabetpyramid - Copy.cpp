#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        char ch= 'A';
        int breakpt= (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
           if(j<= breakpt)
            ch++;
           else
           ch--;
        }
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
}