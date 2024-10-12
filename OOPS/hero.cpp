#include<iostream>
#include<string.h>
using namespace std;

class Hero{
     private:
    char level;

    public:
    static int time;
    int health;
    char* name;

    Hero(){
      name= new char[100];
    }
    
   
//    constructor
    // Hero(){
    //     cout<<"Constructor called!!"<<endl;
    // }
 
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health= health; // copies value of health passed to function to current object health
    }

    Hero(int health,char level){
        cout<<"this->"<<this<<endl;
        this->health= health; // copies value of health passed to function to current object health
        this->level= level;
    }

    //  Hero(Hero &temp){
    //     cout<<"My copy constructor called!!"<<endl;
    //     this->health= temp.health;
    //     this->level= temp.level;
    // }
    
    Hero(Hero & temp){
        char *ch= new char[strlen(temp.name)+ 1];
        cout<<"My copy constructor called!!"<<endl;
        this->health= temp.health;
        this->level= temp.level;
        this->name= ch;
    }
    void print(){
        cout<<endl;
        cout<<this->name<<" ";
        cout<<health<<" ";
         cout<<level<<endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }
    
    static int random(){
        // cout<<time<<endl;
        return time;
    }
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

// notation to call a static member of a class
int Hero:: time= 5;

int main(){
    // Hero h1(100);
//     cout<<h1.health<<endl;
//     cout<<"Address of h1:"<<&h1<<endl;
//     h1.print();
//     cout<<endl;

    // Hero* b= new Hero(50);
    // delete b;          // manually deleting a dynamically allocated object

//     cout<<b->health<<endl;
//     cout<<"Address of b:"<<&b<<endl;
//     b->print();
//     cout<<endl;

//    Hero h2(10,'S');
//    h2.print();
//    cout<<endl;

//    Hero R(200,'A');
//    R.print();

// //    copy constructor
//    Hero S(R);
//    S.print();
   
    //  Hero h3;
    //  h3.setLevel('A');
    //  h3.setHealth(50);
    //  char name[8]= "Saurabh";
    //  h3.setName(name);
    //  h3.print();

    // // default copy constructor called does shallow copy
    //  Hero h4(h3);
    // //  h4.print();

    //  h3.name[0]= 'G';
    //  h3. print();

    //  h4.print();
    
    // // copy assignment opertor
    //  h3= h4;
    //  h3. print(); 

     cout<< Hero::time<<endl;
     cout<< Hero::random()<<endl;
}