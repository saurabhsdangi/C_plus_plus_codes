#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

     public:
     int add(){
        return a+ b;
     }
    void operator+ (B &obj){
        int val1= this->a;
        int val2= obj.a;
        cout<<"Output: "<<val2 - val1<<endl;
    }

    void operator() (){
        cout<< "I'm bracket "<<this->a<<endl;
    }
};

int main(){
    B obj1, obj2;

    obj1.a= 2;
    obj2.a= 5;
    obj1 + obj2;

    obj1();
}