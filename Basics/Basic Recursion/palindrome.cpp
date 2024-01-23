#include <bits/stdc++.h>
using namespace std;

void rev_arr(int i, int arr[])
{

    int n = sizeof(arr) / sizeof(int);

    if (i >= n / 2)
    {
        return;
    }

    swap(arr[i], arr[n - i - 1]);
    rev_arr(i + 1, arr);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    rev_arr(0, arr);

    return 0;
}