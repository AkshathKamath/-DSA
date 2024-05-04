#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool firstSubseqWithSumK(int i, int n, vector<int> nums, vector<int> &temp, vector<vector<int>> &ans, int sum, int target)
{
    if (i >= n)
    {
        if (sum == target)
        {
            ans.push_back(temp);
            return true;
        }
        return false;
    }

    temp.push_back(nums[i]);
    sum += nums[i];

    if (firstSubseqWithSumK(i + 1, n, nums, temp, ans, sum, target) == true)
        return true;

    temp.pop_back();
    sum -= nums[i];

    if (firstSubseqWithSumK(i + 1, n, nums, temp, ans, sum, target) == true)
        return true;

    return false;
}

int main()
{

    vector<int> nums = {1, 2, 1};
    int target = 2;
    vector<vector<int>> ans;
    vector<int> temp;
    firstSubseqWithSumK(0, 3, nums, temp, ans, 0, target);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << "\n";
    }

    return 0;
}
