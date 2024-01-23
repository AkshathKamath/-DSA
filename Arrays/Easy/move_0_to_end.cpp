#include <bits/stdc++.h>
using namespace std;

void zerotoEnd(int arr[], int n)
{

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1 || j == n - 1)
        return;

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 0, 3, 0, 4};
    int n = sizeof(arr) / sizeof(int);

    zerotoEnd(arr, n); // TC=O(n) & SC=O(1)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}