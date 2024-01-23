#include <bits/stdc++.h>
using namespace std;

int fibon(int n) // O(2^n): exponential
{

    if (n <= 1)
        return n;

    int last = fibon(n - 1);
    int sec_last = fibon(n - 2);
    return last + sec_last;
}

int main()
{
    int n;
    cin >> n;

    cout << fibon(n);

    return 0;
}