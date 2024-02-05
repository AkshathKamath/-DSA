#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high)
{

    int ct = 0;

    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high)
    {

        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            ct = ct + (mid - left + 1);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    return ct;
}

int mergeSort(int arr[], int low, int high)
{

    int ct = 0;

    if (low == high)
        return 0;

    int mid = (low + high) / 2;
    ct += mergeSort(arr, low, mid);
    ct += mergeSort(arr, mid + 1, high);
    ct += merge(arr, low, mid, high);

    return ct;
}

int countInversions(int arr1[], int n1)
{

    int ct = mergeSort(arr1, 0, n1 - 1);
    return ct;
}

int main()
{
    int arr1[] = {5, 4, 3, 2, 1};
    int n1 = sizeof(arr1) / sizeof(int);

    int ans = countInversions(arr1, n1); // TC=O(nlogn) & SC=O(n)
    cout << ans;

    return 0;
}