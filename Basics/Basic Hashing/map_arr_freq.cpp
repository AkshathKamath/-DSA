#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[] = {1, 3, 2, 1, 3};
    int q;
    cin >> q;

    map<int, int> mpp; // Using unordered map with better avg. and best time comp. O(1) but worse worst case O(n)
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++; // O(logN)
    }
    cout << mpp[q];

    return 0;
}