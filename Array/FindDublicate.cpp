// problem: find dublicate element in array
// logic: using hashmap
// date: day 6

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int arr[] = {3, 1, 4, 1, 5, 3, 3};
    int n = 7;

    unordered_map<int, int> same;

    for (int i = 0; i < n; i++)
    {

        same[arr[i]]++;
    }

    cout << "this is dublicate elements in array : " << endl;

    for (auto p : same)
    {

        if (p.second > 1)
        {
            cout << p.first << " " << endl;

        }
    }

    return 0;
}
