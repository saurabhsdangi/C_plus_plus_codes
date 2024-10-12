#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 64+n;
    char ch = (char)a;
    char bh;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1){
                cout<<ch;
                bh = ch + 1;
                ch--;
            }
            else{
                cout<<bh;
                bh++;
            }
        }
        cout<<endl;
    }
    return 0;
}