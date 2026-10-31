#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    int arr[] = {6, 1, 6, 6, 1, 4};
    int n = 6;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {

        freq[arr[i]]++;
    }

    for (auto p : freq)
    {

        cout << "frequency count of this element = " << p.first << " = " << p.second << endl;
    }
    return 0;
}