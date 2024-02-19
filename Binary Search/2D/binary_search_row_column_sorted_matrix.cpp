#include <bits/stdc++.h>
using namespace std;

vector<int> binarySearchRowAndColumnSorted2D(vector<vector<int>> &matrix, int n, int m, int target)
{

    int row = 0, col = m - 1;

    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
            return {row, col};
        else if (matrix[row][col] < target)
            row++;
        else
            col--;
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> arr1 = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int n1 = arr1.size();
    int n2 = arr1[0].size();

    vector<int> ans = binarySearchRowAndColumnSorted2D(arr1, n1, n2, 6); // TC=O(m*n)
    cout << ans[0] << " " << ans[1];

    return 0;
}