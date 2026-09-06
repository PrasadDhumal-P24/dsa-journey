#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 5, 2, 7, 4, 6};
    int n = 6;

    int prefix[6];

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {

        prefix[i] = prefix[i - 1] + arr[i];
    }

    int l = 2;
    int r = 4;

    int sum = prefix[r] - prefix[l - 1];

    cout << "prefix sum = " << sum << endl;

    return 0;
}