#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 4, 6, 8, 9, 11};
    int n = 7;
    int start = 0;
    int end = n - 1;
    int target = 10;
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
        cout << "element not found " << endl;
    }
    return 0;
}