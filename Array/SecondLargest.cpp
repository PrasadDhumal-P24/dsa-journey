#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {-2,-4,-1,0};
    int n = 4;

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

    if (secondlargest)
    {
        cout << "second largest is : " << secondlargest << endl;
    }
    else
    {
        cout << "second largest not found : " << INT_MIN << endl;
    }
    return 0;
}