// problem: move all zeros to end
// logic: swaping condition lavaychi
// date: day 7

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {5, 0, 6, 0, 77, 89, 0, 99};
    int n = 8;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    for (int pos = 0; pos < n; pos++)
    {
        cout << arr[pos] << " " << endl;
    }
    return 0;
}