#include <bits/stdc++.h>
using namespace std;

int searchInRotatedSortedArray(vector<int> &nums, int n, int target)
{

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else
        {
            if (nums[low] <= nums[mid])
            {
                if (target >= nums[low] && target <= nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else
            {
                if (target >= nums[mid] && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n1 = arr1.size();

    int ans = searchInRotatedSortedArray(arr1, n1, 1);
    cout << ans;

    return 0;
}