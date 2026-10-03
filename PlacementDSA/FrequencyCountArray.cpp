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

    cout << "frequency count of 4 = " << freq[4] << endl;
    cout << "frequency count of 2 = " << freq[2] << endl;
    cout << "frequency count of 7 = " << freq[7] << endl;
    cout << "frequency count of 5 = " << freq[5] << endl;
    cout << "frequency count of 9 = " << freq[9] << endl;

    return 0;
}