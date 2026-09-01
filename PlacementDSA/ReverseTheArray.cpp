// patters :- 2 pointers

#include <iostream>>
using namespace std;

void reverse(int arr[], int n)
{

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}