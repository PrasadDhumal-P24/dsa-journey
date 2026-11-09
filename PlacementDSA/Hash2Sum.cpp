#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int arr[] = {1, 6, 8, 11};
    int n = 4;
    int target = 9;
    bool found = true;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {

        int need = target - arr[i];

        if (mp.find(need) != mp.end())
        {

            cout << mp[need] << " + " << i << " = " << target << endl;
            found = true;
            break;
        }

        mp[arr[i]] = i;
    }

    if (!found)
    {

        cout << -1 << endl;
    }
    return 0;
}