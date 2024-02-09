#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &nums, int n, int k) // OR ca use lower_bound(vector.begin(),vector.end(),x)-vector.begin()
{

    int low = 0, high = n - 1; // Lower bound is the smallest index i such that arr[i]>=x
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 5, 7, 8, 9, 10};
    int n1 = arr1.size();

    int ans = lowerBound(arr1, n1, 6); // TC=O(log(base2)n)
    cout << ans;

    return 0;
}