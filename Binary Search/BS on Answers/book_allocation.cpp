#include <bits/stdc++.h>
using namespace std;

int studentsForPages(vector<int> &nums, int n, int pages)
{

    int currPages = 0, students = 0;
    for (int i = 0; i < n; i++)
    {
        currPages += nums[i];
        if (currPages > pages)
        {
            students++;
            currPages = nums[i];
        }
    }
    students++;
    return students;
}

int allocateBooks(vector<int> &nums, int n, int students)
{

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int ans = 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (studentsForPages(nums, n, mid) == students)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (studentsForPages(nums, n, mid) > students)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {25, 46, 28, 49, 24};
    int n1 = arr1.size();

    int ans = allocateBooks(arr1, n1, 4);
    cout << ans;

    return 0;
}