#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int n, int k)
{

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == k)
            return mid;
        else if (k > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n1 = arr1.size();

    int ans = binarySearch(arr1, n1, 6); // TC=O(log (base 2) n)
    cout << ans;

    return 0;
}