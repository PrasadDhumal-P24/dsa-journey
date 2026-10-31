#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {5, 5, 5, 5};
    int n = 5;

    int largest = arr[0];
    int secondlargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && largest != arr[i])
        {
            secondlargest = arr[i];
        }
    }

    if (secondlargest != INT_MIN)
    {
        cout << " this is the secondlargest element in array : " << secondlargest << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}