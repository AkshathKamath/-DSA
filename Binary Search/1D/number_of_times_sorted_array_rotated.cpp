#include <bits/stdc++.h>
using namespace std;

int numberOfTimesSortedArrayRotated(vector<int> &nums, int n)
{

    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int index = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[low] <= nums[mid])
        {
            if (nums[low] < ans)
            {
                ans = nums[low];
                index = low;
            }
            low = mid + 1;
        }
        else
        {
            if (nums[mid] < ans)
            {
                ans = nums[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}

int main()
{
    vector<int> arr1 = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n1 = arr1.size();

    int ans = numberOfTimesSortedArrayRotated(arr1, n1);
    cout << ans;

    return 0;
}