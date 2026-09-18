#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str)
{

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {

            if (s.empty())
            {
                return false;
            }

            char top = s.top();

            if (ch == ')' || ch == '}' || ch == ']')
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return s.empty();
}

int main()
{

    string str = "[{))}]";

    if (isBalanced(str))
    {
        cout << "stack is balanced" << endl;
    }
    else
    {
        cout << "stack are not balanced" << endl;
    }
    return 0;
}