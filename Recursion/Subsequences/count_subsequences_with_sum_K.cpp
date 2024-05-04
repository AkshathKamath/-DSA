#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countSubseqWithSumK(int i, int n, vector<int> nums, int sum, int target)
{
    if (i >= n)
    {
        if (sum == target)
            return 1;
        return 0;
    }

    sum += nums[i];

    int l = countSubseqWithSumK(i + 1, n, nums, sum, target);

    sum -= nums[i];

    int r = countSubseqWithSumK(i + 1, n, nums, sum, target);

    return l + r;
}

int main()
{

    vector<int> nums = {1, 2, 1};
    int target = 2;
    cout << countSubseqWithSumK(0, 3, nums, 0, target);

    return 0;
}
