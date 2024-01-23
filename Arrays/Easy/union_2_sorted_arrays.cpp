#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(int arr1[], int arr2[], int n1, int n2)
{

    int i = 0;
    int j = 0;
    vector<int> unionarr;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionarr.size() == 0 || unionarr.back() != arr1[i])
            {
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionarr.size() == 0 || unionarr.back() != arr2[j])
            {
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr1[i])
        {
            unionarr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionarr.size() == 0 || unionarr.back() != arr2[j])
        {
            unionarr.push_back(arr2[j]);
        }
        j++;
    }

    return unionarr;
}

int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    vector<int> answer;

    answer = unionArray(arr1, arr2, n1, n2); // TC=O(n1+n2) and SC=O(n1+n2)
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }

    return 0;
}