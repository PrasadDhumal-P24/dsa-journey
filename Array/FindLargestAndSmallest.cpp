// problem: find largest and smallest element in array
// logic: use 2 variable and 2 if condition
// date: day 12

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 6, 8, 22, 45};
    int n = 5;
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;

    return 0;
}