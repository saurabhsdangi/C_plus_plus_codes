#include<iostream>
using namespace std;

class hello{
    public:
    // function overloading
    void Hello(){
        cout<<"Hello Saurabh"<<endl;
    }

    void Hello(string name){
        cout<<"Hello "<<name<<endl;
    }

    string Hello(string name, int n){
          cout<<name<<endl;
    }
};

int main(){
    hello H;
    H.Hello();
    H.Hello("Saurabh");
    H.Hello("Saurabh", 5);
}