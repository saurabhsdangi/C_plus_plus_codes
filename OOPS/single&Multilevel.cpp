#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"It speaks"<<endl;
    }
};

  class Dog: public Animal{

};

  class Pitbull: public Dog{

  };

int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;

    Pitbull P;
    P.speak();

}