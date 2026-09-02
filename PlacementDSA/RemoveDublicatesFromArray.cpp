#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 1, 2, 2, 3, 3, 4};
    int n = 7;
    int i = 0;
    int j = 1;

    while (j < n)
    {

        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            i++;
            arr[i] = arr[j];
            j++;
        }
    }

    int uniquecount = i + 1;

    cout << "uniquecount = " << uniquecount << endl;

    for (int k = 0; k < uniquecount; k++)
    {
        cout << arr[k] << endl;
    }
    return 0;
}