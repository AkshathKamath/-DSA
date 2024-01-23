#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[] = {1, 3, 2, 1, 3};
    int q;
    cin >> q;

    int hash[13]; // Max no. is 13 & max size is 10^6 for integer. If declared globally then max is 10^7
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    cout << hash[q];

    return 0;
}
