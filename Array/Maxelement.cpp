#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-5, -2, -8};
    int n = 3;

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}