#include <iostream>>
#include <unordered_map>
using namespace std;

int main()
{

    int arr[] = {2, 5, 2, 7, 5, 2};
    int n = 6;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {

        freq[arr[i]]++;
    }

    cout << "frequency count of 2 = " << freq[2] << endl;
    cout << "frequency count of 5 = " << freq[5] << endl;
    cout << "frequency count of 7 = " << freq[7] << endl;

    return 0;
}