// problem: if you reverse string and is also as it is then pallindrome
// logic: compare first character vs last character
// date : day 2

#include <iostream>
using namespace std;

int main()
{

    string s = "drasad";
    int start = 0;
    int end = s.length() - 1;

    bool palindrome = true;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[start] != s[end])
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
    return 0;
}
