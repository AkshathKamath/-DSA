#include <bits/stdc++.h>
using namespace std;

int numberAppearOnce(int arr1[], int n1)
{

    int ans = 0;
    for (int i = 0; i < n1; i++)
    {
        ans = ans ^ arr1[i];
    }
    return ans;
}

int main()
{
    int arr1[] = {1, 1, 2, 3, 3, 4, 4};

    int n1 = sizeof(arr1) / sizeof(int);

    cout << numberAppearOnce(arr1, n1); // TC=O(n) and SC=O(1)

    return 0;
}