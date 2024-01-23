#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q; // FIFO: All ops in O(1)
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 4; // 4->8
    cout << q.back();
    cout << q.front();

    q.pop(); // removes 1
    cout << q.front();

    return 0;
}