#include<iostream>
using namespace std;
int main(){
    int n=5;

    for(int i=0;i<n;i++){
        cout<<"Hey"<<endl;
        continue;
        cout<<"Hii";
    }
    int num;
    switch(num){
        case 1: cout<< "First";
        break;
        case 2: cout<< "Second";
        break;
        // continue;
        case 3: cout<< "Third";
        break;
        default: cout<< "Invalid";
    }
}