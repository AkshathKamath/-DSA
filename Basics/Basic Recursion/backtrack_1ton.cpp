#include <bits/stdc++.h>
using namespace std;

void backtrack_1ton(int i, int n)
{

    if (i < 1)
    {
        return;
    }

    backtrack_1ton(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;

    backtrack_1ton(n, n);

    return 0;
}