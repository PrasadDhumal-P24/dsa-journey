// problem: find largest and smallest element in array
// logic: use 2 variable and 2 if condition
// date: day 12

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "largest = " << largest << endl;
    cout << "smallest = " << smallest << endl;

    return 0;
}