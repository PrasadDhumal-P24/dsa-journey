#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int arr[] = {4, 2, 5, 6, 2, 4, 8};
    int n = 7;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {

        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {

        if (freq[arr[i]] > 1)
        {

            cout << "frequency count of 1st index = " << freq[arr[i]] << endl;
            break;
        }
    }

    return 0;
}