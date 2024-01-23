#include <bits/stdc++.h>
using namespace std;

int countDivisors(int n)
{
    int ct = 0;

    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
            ct++;
        if (n / i != i)
            ct++;
    }
    return ct;
}

int main()
{
    int n;
    cin >> n;

    cout << countDivisors(n);

    return 0;
}
