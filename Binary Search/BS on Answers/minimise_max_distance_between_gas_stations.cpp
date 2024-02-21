#include <bits/stdc++.h>
using namespace std;

int minimiseMaxDistanceBtwGasStations(vector<int> &nums, int n, int k)
{

    vector<int> many(n - 1, 0);
    priority_queue<pair<long double, int>> pq;

    for (int i = 0; i < n - 1; i++)
    {
        pq.push({nums[i + 1] - nums[i], i});
    }

    for (int i = 0; i < k; i++)
    {
        auto tp = pq.top();
        pq.pop();
        int secInd = tp.second;
        many[secInd]++;
        long double iniDiff = nums[secInd + 1] - nums[secInd];
        long double newSecLen = iniDiff / (long double)many[secInd] + 1;
        pq.push({newSecLen, secInd});
    }
    return pq.top().first;
}

int main()
{
    vector<int> arr1 = {1, 13, 17, 23};
    int n1 = arr1.size();

    int ans = minimiseMaxDistanceBtwGasStations(arr1, n1, 4);
    cout << ans;

    return 0;
}