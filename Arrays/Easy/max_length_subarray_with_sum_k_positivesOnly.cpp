#include <bits/stdc++.h>
using namespace std;

int maxLengthSubarrayWithSumK(int arr1[], int n1, int k)
{

    int i = 0, j = 0, sum = arr1[0], maxLen = 0;
    while (j < n1)
    {
        while (i <= j && sum > k)
        {
            sum -= arr1[i];
            i++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, j - i + 1);
        }

        j++;

        if (j < n1)
        {
            sum += arr1[j];
        }
    }

    return maxLen;
}

int main()
{
    int arr1[] = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    // int arr2[]={2,3,3,5,6,6,7};
    int n1 = sizeof(arr1) / sizeof(int);
    // int n2 = sizeof(arr2)/sizeof(int);
    // vector<int> answer;

    // answer= interArray(arr1, arr2, n1, n2);

    // for(int i=0;i<answer.size();i++){
    //     cout<<answer[i];
    // }

    cout << maxLengthSubarrayWithSumK(arr1, n1, 6); // TC=O(2n) & SC=O(1)

    return 0;
}