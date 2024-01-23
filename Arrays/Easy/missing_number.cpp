#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr1[], int N)
{

    int n = N - 1;
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ arr1[i];
        xor2 = xor2 ^ (i + 1);
    }
    xor2 = xor2 ^ N;
    return xor1 ^ xor2;
}

int main()
{
    int arr1[] = {1, 2, 4, 5};

    int n1 = sizeof(arr1) / sizeof(int);

    cout << missingNumber(arr1, 5); // TC=O(n) and SC=O(1)

    return 0;
}