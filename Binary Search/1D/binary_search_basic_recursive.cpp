#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int low, int high, int k)
{

    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (nums[mid] == k)
        return mid;
    else if (k > nums[mid])
        return binarySearch(nums, mid + 1, high, k);
    return binarySearch(nums, low, high - 1, k);
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n1 = arr1.size();

    int ans = binarySearch(arr1, 0, n1 - 1, 6);
    cout << ans;

    return 0;
}