#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool redundantBrackets(string &str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            s.push(ch);

        else if (ch == ')')
        {
            bool isRed = true;
            while (s.top() != '(')
            {
                char top = s.top();
                if (top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isRed = false;
                }
                s.pop();
            }
            s.pop();
            if (isRed == true)
            {
                return true;
            }
        }
    }
    return false;
}

void print(string str)
{
    cout << str;
    cout << endl;
}

int main()
{
    string str;
    // str.push_back('(');
    // str.push_back('(');
    // str.push_back('a');
    // str.push_back('+');
    // str.push_back('b');
    // str.push_back(')');
    // str.push_back('+');
    // str.push_back('(');
    // str.push_back('c');
    // str.push_back('*');
    // str.push_back('d');
    // str.push_back(')');
    // str.push_back(')');

    str.push_back('(');
    str.push_back('/');
    str.push_back('d');
    str.push_back('*');
    str.push_back('e');
    str.push_back(')');
    print(str);
    if (redundantBrackets(str))
    {
        cout << "Redundant brackets found";
    }
    else
    {
        cout << "Redundant brackets not found";
    }
}
// (c/d*e)