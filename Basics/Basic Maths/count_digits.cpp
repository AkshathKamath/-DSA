#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ct = 0;

    while (n != 0) // O(log10(N))
    {
        ct++;
        n = n / 10; // OR (int)(log10(n)+1)
    }
    cout << ct;

    return 0;
}