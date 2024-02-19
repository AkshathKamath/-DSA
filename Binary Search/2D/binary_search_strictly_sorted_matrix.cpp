#include <bits/stdc++.h>
using namespace std;

bool binarySearch2D(vector<vector<int>> &matrix, int n, int m, int target)
{

    int low = 0, high = n * m - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> arr1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n1 = arr1.size();
    int n2 = arr1[0].size();

    bool ans = binarySearch2D(arr1, n1, n2, 6); // TC=O(log(base2)n*m)
    cout << ans;

    return 0;
}