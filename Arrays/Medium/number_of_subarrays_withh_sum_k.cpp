#include <bits/stdc++.h>
using namespace std;

int subarrayWithSumK(vector<int> &nums, int n, int k)
{

    unordered_map<int, int> mp;
    int preSum = 0;
    int ans = 0;
    mp[preSum]++;

    for (int i = 0; i < n; i++)
    {
        preSum += nums[i];
        int rem = preSum - k;
        ans += mp[rem];
        mp[preSum]++;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    int n1 = arr.size();

    int ans = subarrayWithSumK(arr, n1, 3); // TC=O(n*logn) for ordered map and O(n) for unordered in best,avg case & O(n^2) in worst case & SC=O(n)
    cout << ans;

    return 0;
}