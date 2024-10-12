#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n== 1)
    return 0;
    
    if(n== 2)
    return 1;

    int ans= 0;
    ans= fibonacci(n-1) + fibonacci(n-2);

}
int main(){
    int n;
    cout<<"Enter the index of fibonacci sequence: "<<endl;
    cin>>n;
    fibonacci(n);
    cout<<fibonacci(n);
}