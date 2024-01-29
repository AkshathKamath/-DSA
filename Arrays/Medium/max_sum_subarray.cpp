#include <bits/stdc++.h>
using namespace std;

vector<int> maxSumSubarray(int nums[], int n)
{

    int maxi = INT_MIN;
    int sum = 0;
    int start = 0;
    int arrStart = -1, arrEnd = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
            arrStart = start;
            arrEnd = i;
        }
        if (sum < 0)
            sum = 0;
    }
    return {arrStart, arrEnd, maxi};
}

int main()
{
    int arr1[] = {-1, -2, 3, 4, -1, 5, -3};

    int n1 = sizeof(arr1) / sizeof(int);

    vector<int> ans = maxSumSubarray(arr1, n1); // TC=O(n) & SC=O(1)
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}