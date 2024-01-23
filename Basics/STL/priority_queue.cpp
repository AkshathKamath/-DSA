#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // Max heap, Max elements on top, log n for pop & push, O(1) for top
    pq.push(1);
    pq.push(2);
    pq.emplace(10);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> pq1; // Min heap
    pq1.push(2);
    pq1.push(1);
    pq1.emplace(10);

    cout << pq1.top();

    return 0;
}