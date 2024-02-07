#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrayWithXorK(vector<int> &nums, int n, int k)
{

    unordered_map<int, int> mp;
    int xr = 0;
    mp[xr]++;
    int ct = 0;

    for (int i = 0; i < n; i++)
    {
        xr = xr ^ nums[i];
        ct += mp[xr ^ k];
        mp[xr]++;
    }
    return ct;
}

int main()
{
    vector<int> arr1 = {4, 2, 2, 6, 4};
    int n1 = arr1.size();

    int ans = numberOfSubarrayWithXorK(arr1, n1, 6); // TC=O(n) or O(nlogn) & SC=O(n)
    cout << ans;

    return 0;
}