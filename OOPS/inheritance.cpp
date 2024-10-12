#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    // private:
    int age;

    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight= w;
    }
};

//    syntax of inheritance
   class Male: public Human{
      public:
      string color;

      void sleep(){
            cout<<"Male sleeps"<<endl;
      }

      int getHeight(){
        return this->height;  
      }
   };

int main(){
     Male m1;
     cout<<m1.age<<endl;
     cout<<m1.getHeight()<<endl;
     cout<<m1.weight<<endl;
     cout<<m1.color<<endl;
     m1.sleep();
     m1.setWeight(77);
     cout<<m1.weight<<endl;
}