#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{ // O(n^2) -> best,worst & average

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;

    selectionSort(arr, n); // Selct min element in a iteration & swap with first
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}