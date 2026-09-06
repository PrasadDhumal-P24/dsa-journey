#include <iostream>
using namespace std;

int minlencontignoussubarray(int arr[], int n, int target)
{

    int start = 0;
    int sum = 0;
    int minlen = n + 1;

    for (int end = 0; end < n; end++)
    {

        sum += arr[end];

        while (sum >= target)
        {

            int currlen = end - start + 1;

            if (currlen < minlen)
            {
                minlen = currlen;
            }

            sum -= arr[start];
            start++;
        }
    }
    if (minlen == n + 1)
    {
        return 0;
    }
    return minlen;
}
int main()
{

    int arr[] = {2, 5, 8, 3, 6, 7};
    int n = 6;
    int target = 10;

    int answer = minlencontignoussubarray(arr, n, target);

    cout << "Minimum length of subarray sum = " << answer << endl;
    return 0;
}