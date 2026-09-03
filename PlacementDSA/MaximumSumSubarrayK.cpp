#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
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

    cout << "maximum sum = " << maxsum << endl;

    return 0;
}