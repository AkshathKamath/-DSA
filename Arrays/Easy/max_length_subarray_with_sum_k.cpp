#include <bits/stdc++.h>
using namespace std;

int maxLengthSubarrayWithSumK(int arr1[], int n1, int k)
{

    map<int, int> preSumMap;
    int sum = 0, maxLen = 0;
    for (int i = 0; i < n1; i++)
    {
        sum += arr1[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    int arr1[] = {1, 2, -3, 1, 1, -1, 1, 3, 3};
    // int arr2[]={2,3,3,5,6,6,7};
    int n1 = sizeof(arr1) / sizeof(int);
    // int n2 = sizeof(arr2)/sizeof(int);
    // vector<int> answer;

    // answer= interArray(arr1, arr2, n1, n2);

    // for(int i=0;i<answer.size();i++){
    //     cout<<answer[i];
    // }

    cout << maxLengthSubarrayWithSumK(arr1, n1, 6); // TC=O(n*logn) for map & O(n) in best, O(n^2) in worst case for unordered map & SC=O(n)

    return 0;
}