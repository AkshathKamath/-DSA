#include <bits/stdc++.h>
using namespace std;

vector<int> repeatingandMissingumber(vector<int> &nums, int n)
{

    long long S1 = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S1 += nums[i];
        S2 = S2 + ((long long)nums[i] * (long long)nums[i]);
    }
    long long SN1 = (n * (n + 1)) / 2;
    long long SN2 = (n * (n + 1) * (2 * n + 1) / 6);
    long long val1 = S1 - SN1; // x-y
    long long val2 = S2 - SN2;
    long long val3 = val2 / val1; // x+y
    int ans1 = (val3 + val1) / 2;
    int ans2 = ans1 - val1;

    return {ans1, ans2};
}

int main()
{
    vector<int> arr1 = {2, 4, 3, 1, 1, 6};
    int n1 = arr1.size();

    vector<int> ans = repeatingandMissingumber(arr1, n1); // TC=O(n) & SC=O(1)
    cout << ans[0] << " " << ans[1];

    return 0;
}