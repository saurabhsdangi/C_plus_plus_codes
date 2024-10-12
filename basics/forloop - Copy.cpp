#include <iostream>
using namespace std;
int main()
{
    // int i;
    cout << "hello world" << endl;
    // for (i = 0; i <= 10; i++)
    // {
    //     cout << i <<endl;
    // }

    // int j= 1;
    // int n= 5;
    // for(;;){
    //     if(j<=n)
    //     cout<<j<<endl;
    //     else
    //     break;
    //     j++;
    // }

    // for(int a= 1,b= 1;a>= 1 && b<= 1;a--,b++){
    //     cout<<a<<" "<<b<<endl;
    // }

    // for(int i=0;i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }

    // for(int i=0;i<=5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }

    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // for(int i=0;i<5;i++){
    //     for(int j=i;j<=5;j++)
    //     cout<<i<<" "<<j<<endl;
    // }

    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
        if(i+j== 10)
        break;
        
        cout<<i<<" "<<j<<endl;
        }
    }
}
