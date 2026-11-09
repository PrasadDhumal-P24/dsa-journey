#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    string s = "prapsad";
    bool found = false;
    unordered_map<char, int> freq;

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] == 1)
        {
            cout << s[i] << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << -1;
    }
    return 0;
}