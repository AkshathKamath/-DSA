#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.emblace_back(2);

    vector<pair<int, int>> v2;
    v2.push_back({1, 2});
    v2.emblace_back(1, 2);

    vector<int> v3(5, 100); //[100,100,100,100,100]
    vector<int> v4(5);      // Empty 5 space vector
    vector<int> v5(v3);     // Copy vectors

    return 0;
}