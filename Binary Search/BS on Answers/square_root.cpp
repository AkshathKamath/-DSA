#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{

    int low = 1, high = n;
    int ans = 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid <= n)
        { // Check condition
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

int main()
{
    int ans = squareRoot(28);
    cout << ans;

    return 0;
}