#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int end)
{

    if (end == 0)
    {
        return;
    }

    for (int j = 0; j < end; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubbleSort(arr, end - 1);
}

int main()
{
    int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int n = 9;

    bubbleSort(arr, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
