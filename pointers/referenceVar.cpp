#include<iostream>
using namespace std;

void updateVal(int n){
  n++;
}

void updateRef(int& n){
  n++;
}

int main(){
    int i= 5;
    int &j= i;
    
    cout<<i<<endl; 
    cout<<j<<endl; 
    j++;
    cout<<i<<endl; 
    cout<<j<<endl; 

    int n= 5;
    updateVal(n);
    cout<<"Updated value:"<<n<<endl;

    updateRef(n);
    cout<<"Updated value:"<<n<<endl;
}