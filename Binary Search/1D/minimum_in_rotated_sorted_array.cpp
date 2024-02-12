#include <bits/stdc++.h>
using namespace std;

int minInRotatedSortedArray(vector<int> &nums, int n)
{

    int low = 0, high = n - 1;
    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[low] <= nums[mid])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {7, 8, 9, 0, 1, 2, 3, 4, 5, 6};
    int n1 = arr1.size();

    bool ans = minInRotatedSortedArray(arr1, n1);
    cout << ans;

    return 0;
}