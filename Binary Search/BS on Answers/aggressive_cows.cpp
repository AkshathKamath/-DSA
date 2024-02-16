#include <bits/stdc++.h>
using namespace std;

bool isDistancePossible(vector<int> &nums, int n, int cows, int dis)
{

    int cowct = 1, last = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] - last >= dis)
        {
            last = nums[i];
            cowct++;
        }
    }
    if (cowct >= cows)
        return true;
    return false;
}

int aggresiveCows(vector<int> &nums, int n, int cows)
{

    sort(nums.begin(), nums.end());
    int low = 0, high = nums[n - 1] - nums[0];
    int ans = 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isDistancePossible(nums, n, cows, mid))
        {
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
    vector<int> arr1 = {0, 3, 4, 7, 9, 10};
    int n1 = arr1.size();

    int ans = aggresiveCows(arr1, n1, 4);
    cout << ans;

    return 0;
}