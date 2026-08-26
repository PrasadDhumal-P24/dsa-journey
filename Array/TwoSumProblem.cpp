// Problem: find Two sum problem
// logic: brute force approch
// date: day 1

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 5, 7, 8, 4};
    int n = 5;
    int target = 8;

    bool found = false;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {

                cout << arr[i] << " + " << arr[j] << " = " << target << endl;
                found = true;
                break;
            }
        }
    }
    if (!found)
    {
        cout << "two sum not found" << endl;
    }

    return 0;
}