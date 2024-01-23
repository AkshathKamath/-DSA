#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int end, int n)
{
    if (end == n)
        return;

    int j = end;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertionSort(arr, end + 1, n);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;

    insertionSort(arr, 0, n);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}