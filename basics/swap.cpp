#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter values of x & y:" << endl;
    cin >> x >> y;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout <<"x:"<<x<<endl;
    cout <<"y:"<<y<<endl;


}