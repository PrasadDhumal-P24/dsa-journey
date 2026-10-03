#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 4, 6, 8, 11};
    int n = 6;
    int target = 10;
    int start = 0;
    int end = n - 1;
    bool found = false;

    while (start <= end)
    {

        if (arr[start] + arr[end] == target)
        {
            found = true;
            cout << arr[start] << " + " << arr[end] << " = " << target << endl;
            break;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    if (!found)
    {
        cout << "sum not found" << endl;
    }
    else
    {
        cout << "sum found successfully" << endl;
    }
    return 0;
}
