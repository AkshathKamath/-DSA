#include <bits/stdc++.h>
using namespace std;

int singleElementInSortedArray(vector<int> &nums, int n)
{

    if (n == 1)
        return nums[0];
    if (nums[0] != nums[1])
        return nums[0];
    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1];
    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
            return nums[mid];
        else
        {
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n1 = arr1.size();

    int ans = singleElementInSortedArray(arr1, n1);
    cout << ans;

    return 0;
}