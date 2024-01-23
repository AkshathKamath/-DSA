#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it = v.begin(); // iterator is a memory pointer
    it++;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); // points to just after the end
    cout << v.back() << " ";            // the last element

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}