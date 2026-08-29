// problem: searching element in array
// logic: find mid then compare
// date: day 3

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10, 12};
//     int n = 6;
//     int tar = 10;
//     int st = 0, end = n - 1;

//     while (st <= end)
//     {
//         int mid = (st + end) / 2;
//         if (arr[mid] == tar)
//         {
//             cout << "element found at index " << mid << endl;
//             break;
//         }
//         else if (tar > arr[mid])
//         {
//             st = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 6, 8, 10, 22};
    int n = 5;
    int target = 11;
    int start = 0, end = n - 1;
    bool found = false;

    while (start < end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            found = true;
            cout << "element found at index " << mid << endl;
            break;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    if (!found)
    {
        cout << "element not found " << endl;
    }

    return 0;
}