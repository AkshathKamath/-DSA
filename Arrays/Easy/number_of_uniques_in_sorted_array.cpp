#include <bits/stdc++.h>
using namespace std;

int numberOfUniqueInSorted(int arr[], int n)
{

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 4, 4, 7, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    cout << numberOfUniqueInSorted(arr, n); // TC= O(n) & SC=O(1)

    return 0;
}