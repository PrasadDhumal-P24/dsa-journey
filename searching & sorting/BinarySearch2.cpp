// problem: searching element in array
// logic: find mid then compare
// date: day 3

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int tar = 10;
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == tar)
        {
            cout << "element found at index " << mid << endl;
            break;
        }
        else if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
