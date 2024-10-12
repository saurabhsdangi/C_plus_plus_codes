#include <iostream>
#include <string>
using namespace std;

char toLowerCase(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a;
    }
    else
    {
        char temp = a - 'A' + 'a';
        return temp;
    }
}
void reverse(string a, int len)
{
    int s = 0, e = len - 1;
    while (s < e)
    {
        swap(a[s++], a[e--]);
        // s++;
        // e--;
    }
}

bool checkPalindrome(string a, int len)
{
    int s = 0, e = len - 1;
    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
            return 0;
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    string a;
    cout << "Enter string:";
    cin >> a;
    cout << "String is:";
    cout << a << endl;
    string ch;

    int length = ch.length();

    reverse(ch, length);

    if (checkPalindrome(ch, length))
        cout << "Palindrome!!";

    else
        cout << "Not a Palindrome";
}