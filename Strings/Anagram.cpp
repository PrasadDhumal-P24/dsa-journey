#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    string s1 = "tea";
    string s2 = "eet";

    bool anagram = true;

    unordered_map<char, int> count;

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        count[s2[i]]--;
    }

    for (auto p : count)
    {

        if (p.second != 0)
        {
            anagram = false;
        }
    }

    if (anagram)
    {
        cout << "anagram" << endl;
    }
    else
    {
        cout << "not anagram" << endl;
    }
    return 0;
}