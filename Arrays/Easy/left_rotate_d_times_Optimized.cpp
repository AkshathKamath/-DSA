#include <bits/stdc++.h>
using namespace std;

void leftRotateDtimes(int arr[], int n, int d)
{

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    // cout<< leftRotateOnce(arr,n);
    leftRotateDtimes(arr, n, 3); // TC=O(2n) and SC=O(1)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}