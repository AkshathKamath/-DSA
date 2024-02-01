#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementNby3(vector<int> &nums, int n)
{

    int ct1 = 0, ct2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (ct1 == 0 && el2 != nums[i])
        {
            ct1 = 1;
            el1 = nums[i];
        }
        else if (ct2 == 0 && el1 != nums[i])
        {
            ct2 = 1;
            el2 = nums[i];
        }
        else if (nums[i] == el1)
            ct1++;
        else if (nums[i] == el2)
            ct2++;
        else
        {
            ct1--;
            ct2--;
        }
    }

    ct1 = 0;
    ct2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == el1)
            ct1++;
        if (nums[i] == el2)
            ct2++;
    }
    vector<int> ans;
    if (ct1 > n / 3)
        ans.push_back(el1);
    if (ct2 > n / 3)
        ans.push_back(el2);

    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 1, 2, 1, 4, 5, 2};

    int n1 = arr.size();

    vector<int> ans = majorityElementNby3(arr, n1); // TC=O(2n)
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}