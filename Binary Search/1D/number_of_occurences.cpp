#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &nums, int n, int k)
{
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == k)
        {
            first = mid;
            high = mid - 1;
        }
        else if (k > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
}

int lastOccurence(vector<int> &nums, int n, int k)
{
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == k)
        {
            last = mid;
            low = mid + 1;
        }
        else if (k > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}

int numberOfOccurences(vector<int> &nums, int n, int k)
{

    int first = firstOccurence(nums, n, k);
    if (first == -1)
        return 0;
    int last = lastOccurence(nums, n, k);
    return last - first + 1;
}

int main()
{
    vector<int> arr1 = {2, 8, 8, 8, 8, 11, 13};
    int n1 = arr1.size();

    int ans = numberOfOccurences(arr1, n1, 8);
    cout << ans;

    return 0;
}