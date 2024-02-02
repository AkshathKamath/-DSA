#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithSum0(vector<int> &nums, int n)
{

    int sum = 0, maxL = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == 0)
        {
            int len = i + 1;
            maxL = max(maxL, len);
        }
        else
        {
            if (mp.find(sum) != mp.end())
            {
                int len = i - mp[sum];
                maxL = max(maxL, len);
            }
            else
            {
                mp[sum] = i;
            }
        }
    }
    return maxL;
}

int main()
{
    vector<int> arr = {1, -1, 3, 2, -2, -8, 1, 7, 10, 23};

    int n1 = arr.size();

    int ans = largestSubarrayWithSum0(arr, n1); // TC=O(n*logn) for ordered map & O(n) for unordered map in best/average case, O(n^2) in worst case

    cout << ans;

    return 0;
}