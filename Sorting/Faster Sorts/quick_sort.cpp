#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {

        while (arr[i] <= pivot && i < high)
        {
            i++;
        }

        while (arr[j] > pivot && j > low)
        {
            j--;
        }

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high) // O(n* log(base2)n) and space complexity is O(1)
{

    if (low >= high)
    {
        return;
    }

    int pIndex = partition(arr, low, high);
    quickSort(arr, low, pIndex - 1);
    quickSort(arr, pIndex + 1, high);
}

int main()
{
    int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int n = 9;

    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
