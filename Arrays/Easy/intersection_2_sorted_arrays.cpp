#include <bits/stdc++.h>
using namespace std;

vector<int> interArray(int arr1[], int arr2[], int n1, int n2)
{

    int i = 0;
    int j = 0;
    vector<int> inter;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            inter.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return inter;
}

int main()
{
    int arr1[] = {1, 2, 2, 3, 3, 4, 5, 6};
    int arr2[] = {2, 3, 3, 5, 6, 6, 7};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    vector<int> answer;

    answer = interArray(arr1, arr2, n1, n2); // TC=O(n1+n2) and SC=O(1)
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];
    }

    return 0;
}