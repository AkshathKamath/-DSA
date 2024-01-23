#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{ // O(n^2) -> worst, average & O(n) -> best

    for (int i = n - 1; i > 0; i--)
    {
        int did_swap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                did_swap = 1;
            }
        }
        if (did_swap == 0)
            break;
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;

    bubbleSort(arr, n); // Max element sent to end in each iteration
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
