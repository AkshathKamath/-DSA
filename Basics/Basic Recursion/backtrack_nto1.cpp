#include <bits/stdc++.h>
using namespace std;

void backtrack_nto1(int i, int n)
{

    if (i > n)
    {
        return;
    }

    backtrack_nto1(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;

    backtrack_nto1(1, n);

    return 0;
}
