#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(int);

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int max = 0;
    int max_key = 0;
    for (auto it : mpp)
    {
        if (it.second > max)
        {
            max = it.second;
            max_key = it.first;
        }
    }
    cout << max_key;

    return 0;
}
