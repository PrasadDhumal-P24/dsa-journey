#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    int b = 1;
    int n;

    cout << "Enter a number : " << endl;
    cin >> n;

    for (int i = 1; i < n; i++)
    {

        if (i == 1)
        {
            cout << a << " ";
            continue;
        }

        else if (i == 2)
        {
            cout << b << " ";
            continue;
        }
        else
        {

            int c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
    return 0;
}