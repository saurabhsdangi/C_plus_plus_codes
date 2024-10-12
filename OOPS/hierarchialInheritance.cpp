#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};

class B: public A{
    public:
    void func2(){
      cout<<"Inside function 2"<<endl;
    }
};

class C:public A{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};

int main(){
    A A1;
    A1.func1();

    B B2;
    B2.func1();
    B2.func2();

    C C3;
    C3.func1();                       
    C3.func3();                       
}