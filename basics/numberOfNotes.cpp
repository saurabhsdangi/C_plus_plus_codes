#include<iostream>
using namespace std;
int main(){
     int num;
     cout<<"Enter the amount:";
     cin>>num;

    while(num> 0){
    int val;
    //  cin>>val;
    
    int number;

     switch(val){
        case 100: cout<<"Number of 100 rupee notes: ";
        number= num/val;   
        cout<<number<<endl;
        num= num%val;
        break;

        case 50: cout<<"Number of 50 rupee notes: ";
        number= num/val; 
        cout<<number<<endl; 
        num= num%val;
        break;

        case 20: cout<<"Number of 20 rupee notes: ";
        number= num/val; 
        cout<<number<<endl;
        num= num%val; 
        break;

        case 10: cout<<"Number of 10 rupee notes: ";
        number= num/val; 
        cout<<number<<endl; 
        num= num%val;
        break;
     }
    
    }
}