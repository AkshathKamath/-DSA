#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveLength(vector<int> &nums, int n)
{

    if (n == 0)
        return 0;
    unordered_set<int> st;
    int maxLen = 1;
    for (int i = 0; i < n; i++)
        st.insert(nums[i]);

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int ct = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                ct++;
            }
            maxLen = max(maxLen, ct);
        }
    }
    return maxLen;
}

int main()
{
    vector<int> arr1 = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    int n1 = arr1.size();

    int ans = maxConsecutiveLength(arr1, n1); // TC=O(2n) & SC=O(n)
    cout << ans;

    return 0;
}