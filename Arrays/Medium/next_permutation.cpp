#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &nums, int n)
{

    int ind = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(nums.begin(), nums.end());
        return nums;
    }
    for (int i = n - 1; i > ind; i--)
    {
        if (nums[i] > nums[ind])
        {
            swap(nums[i], nums[ind]);
            break;
        }
    }
    reverse(nums.begin() + ind + 1, nums.end());
    return nums;
}

int main()
{
    vector<int> arr1 = {2, 1, 5, 4, 3, 0, 0};

    int n1 = arr1.size();

    vector<int> ans = nextPermutation(arr1, n1); // TC=O(3n) & SC=O(1)
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }

    return 0;
}