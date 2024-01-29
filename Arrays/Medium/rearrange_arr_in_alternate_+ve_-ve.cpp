#include <bits/stdc++.h>
using namespace std;

vector<int> maxSumSubarray(vector<int> &nums, int n)
{

    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
            pos.push_back(nums[i]);
        else
            neg.push_back(nums[i]);
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        int index = 2 * neg.size();
        for (int i = neg.size(); i < pos.size(); i++)
        {
            nums[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        int index = 2 * pos.size();
        for (int i = pos.size(); i < neg.size(); i++)
        {
            nums[index] = neg[i];
            index++;
        }
    }
    return nums;
}

int main()
{
    vector<int> arr1 = {-2, -1, 1, 3, -4, -6, -5, 7, -8, 2, 4, -6};

    int n1 = arr1.size();

    vector<int> ans = maxSumSubarray(arr1, n1); // TC=O(2n) and SC=O(n)
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }

    return 0;
}