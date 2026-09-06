#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 4, 1, 5, 3, 6};
    int n = 6;

    int prefix[6];

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {

        prefix[i] = prefix[i - 1] + arr[i];
    }

    int query = 3;

    int l[] = {1, 0, 2};
    int r[] = {3, 2, 5};

    int answer = 0;

    for (int q = 0; q < query; q++)
    {

        if (l[q] == 0)
        {

            answer = prefix[r[q]];
        }
        else
        {

            answer = prefix[r[q]] - prefix[l[q] - 1];
        }

        cout << "query is " << answer << endl;
    }

    return 0;
}