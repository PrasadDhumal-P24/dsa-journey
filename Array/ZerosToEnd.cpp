// problem: move all zeros to end
// logic: swaping condition lavaychi
// date: day 7

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0, 3, 0, 5, 0, 8};
    int n = 6;

    int x = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {
            swap(arr[i], arr[x]);
            x++;
        }
    }
    cout << "This is a array after moving all zeros to end : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;
}