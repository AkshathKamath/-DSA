#include <bits/stdc++.h>
using namespace std;

void rotateMatrix90degClockwise(vector<vector<int>> &matrix, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int n1 = matrix.size();

    rotateMatrix90degClockwise(matrix, n1); // TC=O(n^2/4 + n^2/2) & SC=O(1)
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << matrix[i][j] << ",";
        }
        cout << "\n";
    }

    return 0;
}