#include <bits/stdc++.h>
using namespace std;

vector<int> rowAnswer(int row)
{
    vector<int> ans;
    int res = 1;
    ans.push_back(res);

    for (int col = 1; col < row; col++)
    {
        res = res * (row - col);
        res = res / col;
        ans.push_back(res);
    }

    return ans;
}

vector<vector<int>> pascalsTriangle(int r)
{

    vector<vector<int>> ans;

    for (int i = 1; i <= r; i++)
    {
        ans.push_back(rowAnswer(i));
    }

    return ans;
}

int main()
{

    vector<vector<int>> ans = pascalsTriangle(6); // TC=O(n^2)
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