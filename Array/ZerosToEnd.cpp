// problem: move all zeros to end
// logic: swaping condition lavaychi
// date: day 7

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0,0,0,1,2,66,0};
    int n = 7;

    int x = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {
            swap(arr[i], arr[x]);
            x++;
        }
    }
    cout << "This is a array of all zeros to end after moving : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}