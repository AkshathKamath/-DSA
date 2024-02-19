#include <bits/stdc++.h>
using namespace std;

int maxNumber1(vector<vector<int>> &nums, int n, int m)
{

    int ans = -1, max1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int lb = lower_bound(nums.begin(), nums.end(), 1) - nums.begin();
        int no1 = nums[i].size() - lb;
        if (no1 > max1)
        {
            ans = i;
            max1 = no1;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr1 = {{0, 0, 1, 1}, {0, 0, 0, 0}, {0, 1, 1, 1}};
    int n1 = arr1.size();
    int n2 = arr1[0].size();

    int ans = maxNumber1(arr1, n1, n2); // TC=O(n*log(base2)m)
    cout << ans;

    return 0;
}