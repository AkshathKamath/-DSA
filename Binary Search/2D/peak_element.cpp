#include <bits/stdc++.h>
using namespace std;

int maxElementIndexInColumn(vector<vector<int>> &mat, int col)
{
    int n = mat.size();
    int m = mat[0].size();
    int maxi = INT_MIN, ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (mat[i][col] > maxi)
        {
            maxi = mat[i][col];
            ind = i;
        }
    }
    return ind;
}

vector<int> peakElement2D(vector<vector<int>> &mat, int n, int m)
{

    int low = 0, high = m - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int maxIndex = maxElementIndexInColumn(mat, mid);
        int left = -1, right = -1;
        if (mid > 0)
            left = mat[maxIndex][mid - 1];
        if (mid < m - 1)
            right = mat[maxIndex][mid + 1];
        if (mat[maxIndex][mid] > left && mat[maxIndex][mid] > right)
            return {maxIndex, mid};
        else if (mat[maxIndex][mid] < left)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> arr1 = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
    int n1 = arr1.size();
    int n2 = arr1[0].size();

    vector<int> ans = peakElement2D(arr1, n1, n2); // TC=O((log(base2)m)*n)
    cout << ans[0] << " " << ans[1];

    return 0;
}