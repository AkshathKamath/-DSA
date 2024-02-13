#include <bits/stdc++.h>
using namespace std;

int power(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = ans * m;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int nthRoot(int n, int m)
{

    int low = 1, high = m;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (power(mid, n, m) == 1)
            return mid;
        else if (power(mid, n, m) == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{

    int ans = nthRoot(3, 27);
    cout << ans;

    return 0;
}