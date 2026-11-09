// problem: check number is palindrome or not
// logic: 1st store original number
// then reverse
// then compare
// date: day 1

#include <iostream>
using namespace std;

int main()
{

    int num = 123321;
    int original = num;
    int rev = 0;

    while (num > 0)
    {

        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (rev == original)
    {
        cout << "Pallindrome" << endl;
    }
    else
    {
        cout << "Not pallindrome" << endl;
    }
    return 0;
}