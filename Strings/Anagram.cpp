#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    string s1 = "binary";
    string s2 = "brainy";

    bool isAnagram = true;

    unordered_map<char, int> same;

    for (int i = 0; i < s1.length(); i++)
    {
        same[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        same[s2[i]]--;
    }
    for (auto p : same)
    {
        if (p.second != 0)
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
    {
        cout << "Anagram" << endl;
    }
    else
    {
        cout << "Not Anagram" << endl
             << -1;
    }
    return 0;
}


