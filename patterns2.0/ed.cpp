#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        char ch= 'E'- i;
        for(int j=0;j<=i;j++){
           cout<<ch;
           ch++;
        }
        cout<<endl;
    }
}