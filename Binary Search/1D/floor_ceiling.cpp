#include <bits/stdc++.h>
using namespace std;

vector<int> floorAndCeiling(vector<int> &nums, int n, int k)
{

    int low = 0, high = n - 1;
    int flooor = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            flooor = nums[mid];
            low = mid + 1;
        }
    }
    int ceiling = nums[lower_bound(nums.begin(), nums.end(), k) - nums.begin()];

    return {flooor, ceiling};
}

int main()
{
    vector<int> arr1 = {10, 20, 30, 40};
    int n1 = arr1.size();

    vector<int> ans = floorAndCeiling(arr1, n1, 25);
    cout << ans[0] << " " << ans[1];

    return 0;
}