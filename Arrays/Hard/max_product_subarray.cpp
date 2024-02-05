#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(vector<int> &nums, int n)
{

    int pre = 1, suf = 1;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        pre = pre * nums[i];
        suf = suf * nums[n - 1 - i];
        ans = max(ans, max(pre, suf));
        if (pre == 0)
            pre = 1;
        if (suf == 0)
            suf = 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, -2, 4};

    int n1 = arr.size();

    int ans = maxProductSubarray(arr, n1); // TC=O(n)

    cout << ans;

    return 0;
}