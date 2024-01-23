#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st; // LIFO: All ops in O(1)
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);

    cout << st.top(); // prints 5
    st.pop();         // removes 5
    cout << st.size();
    cout << st.empty(); // returns boolean

    stack<int> st1, st2;
    st1.swap(st2);

    return 0;
}