#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int start = 0;
    int end = 0;
    int sum = 0;
    int target = 5;

    while (end < n)
    {

        sum = sum + arr[end];

        while (sum < target && start <= end)
        {

            sum = sum - arr[end];
            start++;
        }

        if (sum == target)
        {

            cout << "sumarray : ";

            for (int i = start; i <= end; i++)
            {

                cout << arr[i] << " ";
            }
            break;
            cout << endl;
        }
        end++;
    }

    return 0;
}
