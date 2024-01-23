#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c;
    cin >> c;

    map<char, int> mpp; // Using unordered map with better avg. and best time comp. O(1) but worse worst case O(n)
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++; // O(logN)
    }
    cout << mpp[c];

    return 0;
}
