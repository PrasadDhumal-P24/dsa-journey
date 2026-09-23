#include <iostream>
#include <stack>
using namespace std;

void NextGreater(int arr[], int n)
{

    stack<int> s;
    int answer[n];

    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && s.top() <= arr[i])
        {

            s.pop();
        }
        if (s.empty())
        {
            answer[i] = -1;
        }
        else
        {
            answer[i] = s.top();
        }

        s.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }
}
int main()
{

    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;

    NextGreater(arr, n);

    return 0;
}