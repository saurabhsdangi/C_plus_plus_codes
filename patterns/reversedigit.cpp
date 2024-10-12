#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cin>>num;
    // while(num>0)
    // {
    //    num= num/10;
    //    n++;
    // }
    // cout<<n<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     rem= num%10;
    //     num=num/10;
    //     rev= (rev+ rem*pow(10,n-i));
    // }
    // cout<<rev<<endl;

    while(num>0)
    {
        rem= num%10;
      num= num/10;
      rev= rev*10+ rem;
    }
    cout<<rev<<endl;
}