#include <bits/stdc++.h>
using namespace std;

int lesserThanEqual(vector<vector<int>> &mat, int n, int x)
{
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        int ub = upper_bound(mat[i].begin(), mat[i].end(), x) - mat[i].begin();
        ct += ub;
    }
    return ct;
}

int matrixMedian(vector<vector<int>> &mat, int n, int m)
{

    int low = INT_MAX, high = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        low = min(low, mat[i][0]);
        high = max(high, mat[i][m - 1]);
    }
    int req = (n * m) / 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (lesserThanEqual(mat, n, mid) <= req)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

int main()
{
    vector<vector<int>> arr1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n1 = arr1.size();
    int n2 = arr1[0].size();

    int ans = matrixMedian(arr1, n1, n2); // TC=O(n+log(base2)(max-min)*nlog(base2)m)
    cout << ans;

    return 0;
}