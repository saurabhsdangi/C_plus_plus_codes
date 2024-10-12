#include<iostream>
using namespace std;

#define PI 3.14
int main(){
 int r= 5;
 float area= PI*r*r;
//  PI= PI + 1;   macro value cannot me modified
 cout<<"Area of a circle is: "<<area<<endl;
}