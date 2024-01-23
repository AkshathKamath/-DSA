#include <bits/stdc++.h>
using namespace std;

void leftRotateDtimes(int arr[], int n, int d)
{

    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    // cout<< leftRotateOnce(arr,n);
    leftRotateDtimes(arr, n, 3); // TC= O(n+d) and SC=O(d)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}