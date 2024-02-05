#include <bits/stdc++.h>
using namespace std;

int mergeSortedArray(vector<int> &nums1, int n1, vector<int> &nums2, int n2)
{

    int left = n1 - 1, right = 0;

    while (left >= 0 && right < n2)
    {
        if (nums1[left] > nums2[right])
        {
            swap(nums1[left], nums2[right]);
            left--, right++;
        }
        else
            break;
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    int n1 = arr1.size();
    vector<int> arr2 = {0, 2, 6, 8, 9};
    int n2 = arr2.size();

    mergeSortedArray(arr1, n1, arr2, n2); // TC=O(min(n1,n2))+O(n1logn1)+O(n2logn2) & SC=O(1)
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}