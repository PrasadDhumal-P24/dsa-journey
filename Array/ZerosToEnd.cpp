// problem: move all zeros to end
// logic: swaping condition lavaychi
// date: day 7

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 0, 33, 0, 77, 88, 0};
    int n = 7;
    int j = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " " << endl;
    }
    return 0;
}