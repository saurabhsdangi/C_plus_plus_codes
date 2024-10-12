#include<iostream>
#include "hero.cpp"
using namespace std;

class Hero{
     private:
    char level;

    public:
    int health;
   
//    constructor
    Hero(){
        cout<<"Constructor called!!"<<endl;
    }
 
    Hero(int health){
        this->health= health; // copies value of health passed to function to current object health
    }
    void print(){
        cout<<level;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health= h;
    }

    void setLevel(char l){
        level= l;
    }
};

int main(){
    // creation of object
// static allocation
   Hero h1;
   h1.setHealth(100);
   h1.setLevel('A');
   cout<<"Health of h1: "<<h1.health<<endl;
   cout<<"Level of h1: "<<h1.getLevel()<<endl;

//  dynamic allocation
   Hero *b= new Hero;
   b->setHealth(50);
   b->setLevel('B');
   cout<<"Health of h1: "<<(*b).health<<endl;
   cout<<"Level of h1: "<<(*b).getLevel()<<endl;

// easier notation to dynamically allocate memory
   cout<<"Health of h1: "<<b->health<<endl;
   cout<<"Level of h1: "<<b->getLevel()<<endl;


//    use of getter
//    cout<<"Level of h1:"<<h1.getLevel()<<endl;
// //    use of setter
//    h1.setLevel('S');
   
//    cout<<"Size of h1: "<<sizeof(h1)<<endl;
//    cout<<"Health of h1: "<<h1.health<<endl;;
//    cout<<"Level of h1: "<<h1.getLevel();
}