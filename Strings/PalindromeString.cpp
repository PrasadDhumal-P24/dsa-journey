// problem: if you reverse string and is also as it is then pallindrome
// logic: compare first character vs last character
// date : day 2

#include <iostream>
using namespace std;

bool isPalindrome(string s)
{

    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string s = "om";
    if (isPalindrome(s))
    {
        cout << "Pallindrome";
    }
    else
    {
        cout << "NOt Pallindrome";
    }
    return 0;
}
