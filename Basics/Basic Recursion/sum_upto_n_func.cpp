#include <bits/stdc++.h>
using namespace std;

int sum_upto_n_func(int n)
{

    if (n == 0)
    {
        return 0;
    }

    return n + sum_upto_n_func(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << sum_upto_n_func(n);

    return 0;
}