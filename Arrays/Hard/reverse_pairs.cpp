#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{

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
}

int countReversePairs(vector<int> &arr, int low, int mid, int high)
{
    int right = mid + 1;
    int ct = 0;

    for (int i = low; i <= mid; i++)
    {
        long long temp1 = arr[i];
        while (right <= high)
        {
            long long temp2 = 2 * (long long)arr[right];
            if (temp1 > temp2)
                right++;
            else
                break;
        }
        ct += (right - (mid + 1));
    }
    return ct;
}

int mergeSort(vector<int> &arr, int low, int high)
{

    int ct = 0;

    if (low == high)
        return 0;

    int mid = (low + high) / 2;
    ct += mergeSort(arr, low, mid);
    ct += mergeSort(arr, mid + 1, high);
    ct += countReversePairs(arr, low, mid, high);
    merge(arr, low, mid, high);

    return ct;
}

int reversePairs(vector<int> &arr1, int n1)
{

    int ct = mergeSort(arr1, 0, n1 - 1);
    return ct;
}

int main()
{
    vector<int> arr1 = {40, 25, 19, 12, 9, 6, 2};
    int n1 = arr1.size();

    int ans = reversePairs(arr1, n1); // TC=O(2nlogn) & SC=O(n)
    cout << ans;

    return 0;
}