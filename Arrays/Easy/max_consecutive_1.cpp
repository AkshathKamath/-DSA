#include <bits/stdc++.h>
using namespace std;

int maxConsecutive1(int arr1[], int n1)
{

    int ct1 = 0;
    int max1 = 0;

    for (int i = 0; i < n1; i++)
    {
        if (arr1[i] == 1)
        {
            ct1++;
            if (ct1 > max1)
                max1 = ct1;
        }
        else
            ct1 = 0;
    }
    return max1;
}

int main()
{
    int arr1[] = {1, 1, 0, 1, 1, 1, 0, 0, 1};
    // int arr2[]={2,3,3,5,6,6,7};
    int n1 = sizeof(arr1) / sizeof(int);
    // int n2 = sizeof(arr2)/sizeof(int);
    // vector<int> answer;

    // answer= interArray(arr1, arr2, n1, n2);

    // for(int i=0;i<answer.size();i++){
    //     cout<<answer[i];
    // }

    cout << maxConsecutive1(arr1, n1);

    return 0;
}