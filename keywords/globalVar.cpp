#include<iostream>
using namespace std;
int num = 15;  // global variable- should be avoided 
void b(int& x){
    cout<<x<<endl;
}

void a(int& x){
    char ch= 'A';  // local variable of a()
    cout<<x<<endl;
    b(x);
}

int main(){
    int x= 3; // reference variable
    a(x);
    b(x);

{
    int i = 2;  // local variable of main()
    cout<<i<<endl;
}
}