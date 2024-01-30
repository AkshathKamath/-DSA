#include <bits/stdc++.h>
using namespace std;

vector<int> arrayLeaders(vector<int> &nums, int n)
{

    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] > maxi)
        {
            maxi = nums[i];
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {10, 22, 12, 3, 0, 6};

    int n1 = arr1.size();

    vector<int> ans = arrayLeaders(arr1, n1); // TC=O(n) & SC=O(n)
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }

    return 0;
}