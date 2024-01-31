#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &matrix, int n, int m)
{

    int left = 0, right = m - 1;
    int top = 0, bot = n - 1;
    vector<int> ans;

    while (left <= right && top <= bot)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bot; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bot)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bot][i]);
            }
            bot--;
        }
        if (left <= right)
        {
            for (int i = bot; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int n1 = matrix.size();
    int n2 = matrix[0].size();

    vector<int> ans = spiralMatrix(matrix, n1, n2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ",";
    }

    return 0;
}