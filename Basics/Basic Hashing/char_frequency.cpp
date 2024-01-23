#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c;
    cin >> c;

    int hash[26]; // For lower case -> 26 or 256 otherwise
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++; // for lower case s[i]-'a' or s[i] for otherwise
    }
    cout << hash[c - 'a'];

    return 0;
}
