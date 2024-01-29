#include <bits/stdc++.h>
using namespace std;

int sort012(int nums[], int n)
{

    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    int arr1[] = {0, 1, 2, 0, 1, 2, 2, 1, 0};

    int n1 = sizeof(arr1) / sizeof(int);

    sort012(arr1, n1);
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i];
    }

    return 0;
}