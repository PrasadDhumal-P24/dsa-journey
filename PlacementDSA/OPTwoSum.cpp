#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int target = 55;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {

                cout << i << " + " << j << " = " << target << endl;
            }
        }

        found = true;
        break;
    }

    if (!found)
    {
        cout << "target not found!";
    }

    return 0;
}
