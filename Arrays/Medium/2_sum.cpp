#include <bits/stdc++.h>
using namespace std;

int twoSum(int arr1[], int n1, int k)
{

    int left = 0, right = n1 - 1;
    sort(arr1, arr1 + n1);
    while (left < right)
    {
        int sum = arr1[left] + arr1[right];
        if (sum == k)
            return true;
        else if (sum < k)
            left++;
        else
            right--;
    }
    return false;
}

int main()
{
    int arr1[] = {4, 2, 7, 6, 5, 8};

    int n1 = sizeof(arr1) / sizeof(int);

    cout << twoSum(arr1, n1, 14);

    return 0;
}