#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingSubintervals(vector<vector<int>> &intervals, int n)
{

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || intervals[i][0] > ans.back()[1])
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};

    int n1 = arr.size();

    vector<vector<int>> ans = mergeOverlappingSubintervals(arr, n1); // TC=O(n)
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    // cout<<ans;

    return 0;
}