#include <bits/stdc++.h>
using namespace std;

void recur(int n)
{
    if (n >= 3)
    { // Base case
        return;
    }

    cout << n;
    recur(++n); // Recursion tree
}

int main()
{
    int n;
    cin >> n;

    recur(n);

    return 0;
}