#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &nums, int n)
{

    if (n == 1)
    {
        return 0;
    }
    if (nums[0] > nums[1])
        return 0;
    if (nums[n - 1] > nums[n - 2])
        return n - 1;
    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            return mid;
        else if (nums[mid] > nums[mid - 1])
            low = mid + 1; // Inc slope
        else if (nums[mid] > nums[mid + 1])
            high = mid - 1; // Dec slope
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {1, 10, 13, 7, 6, 5, 4, 2, 1, 0};
    int n1 = arr1.size();

    int ans = peakElement(arr1, n1);
    cout << ans;

    return 0;
}