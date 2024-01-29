#include <bits/stdc++.h>
using namespace std;

int majorityElement(int nums[], int n) // Moore's Voting Algo.
{

    int ct = 0;
    int el = 0;
    for (int i = 0; i < n; i++)
    {
        if (ct == 0)
        {
            el = nums[i];
            ct++;
        }
        else if (nums[i] == el)
        {
            ct++;
        }
        else
            ct--;
    }
    int ct_el = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == el)
            ct_el++;
    }
    if (ct_el > n / 2)
        return el;
    return -1;
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 4, 2, 3, 4};
    // int arr2[]={2,3,3,5,6,6,7};
    int n1 = sizeof(arr1) / sizeof(int);

    cout << majorityElement(arr1, n1); // T.C=O(2n) & S.C=O(1)

    return 0;
}