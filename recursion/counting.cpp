#include<iostream>
using namespace std;

void counting(int n){
    if(n== 0)
    return;
   cout<<n<<" ";
   counting(n-1);
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Counting is as follows:"<<endl;
    counting(n);
}