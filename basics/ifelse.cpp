#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;

    if (age < 12)
        cout << "Children" << endl;
    else if (age > 12 && age < 18)
        cout << "Teenager" << endl;
    else if (age > 18)
        cout << "Adult" << endl;
}