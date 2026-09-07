#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int arr[] = {4, 2, 7, 2, 5, 4, 9};
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

            cout << "frequency of 1st element : " << freq[arr[i]] << endl;
            break;
        }
    }
    return 0;
}