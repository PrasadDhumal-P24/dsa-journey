#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 4, 2, 6, 8, 3, 9};
    int n = 7;
    int k = 3;

    int windowsum = 0;

    for (int i = 0; i < k; i++)
    {

        windowsum += arr[i];
    }

    int maxsum = windowsum;

    for (int i = k; i < n; i++)
    {

        windowsum = windowsum - arr[i - k] + arr[i];

        if (windowsum > maxsum)
        {
            maxsum = windowsum;
        }
    }

    cout << "maxsum = " << maxsum << endl;

    return 0;
}