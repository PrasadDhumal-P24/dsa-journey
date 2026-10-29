// problem: print the element that how many shows in array
// logic: use 3 loop and then see count or not
// date: day 9

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 2, 3, 2, 1};
    int n = 6;

    for (int i = 0; i < n; i++)
    {

        int count = 1;
        bool isalreadycount = false;

        for (int j = 0; j < i; j++)
        {

            if (arr[i] == arr[j])
            {
                isalreadycount = true;
                break;
            }
        }

        if (isalreadycount)
        {

            continue;
        }

        for (int k = i + 1; k < n; k++)
        {

            if (arr[i] == arr[k])
            {

                count++;
            }
        }

        cout << arr[i] << " -> " << count << " times" << endl;
    }
    return 0;
}