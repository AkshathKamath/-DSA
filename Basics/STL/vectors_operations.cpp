#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 4); // To delete range from start to end-1

    vector<int> v1(2, 100);
    v1.insert(v1.begin(), 300); //(position, no. of times, the element)
    v1.insert(v1.begi() + 2, 2, 10);

    cout << v1.size();
    v1.pop_back();
    v1.swap(v2);
    v1.clear();
    cout << v1.empty(); // returns boolean

    return 0;
}