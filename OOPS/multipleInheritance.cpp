#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barks"<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaks"<<endl;
    }
};

// Multiple Inheritance
class Hybrid: public Animal,public Human{

};

int main(){
    Hybrid H;
    H.speak();
    H.bark();
}