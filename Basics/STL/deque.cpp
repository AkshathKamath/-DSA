#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(2);
    dq.emblace_back(4);

    dq.push_front(5);
    dq.emblace_front(1);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    return 0;
}