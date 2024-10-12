#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
    }
}