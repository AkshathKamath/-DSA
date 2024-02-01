#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums, int n)
{

    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j - 1] == nums[j])
                    j++;
                while (j < k && nums[k + 1] == nums[k])
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-2, -2, -2, -1, -1, -1, 0, 0, 0, 2, 2, 2, 2};
    int n1 = arr.size();

    vector<vector<int>> ans = threeSum(arr, n1); // TC=O(nlogn + n^2)
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}