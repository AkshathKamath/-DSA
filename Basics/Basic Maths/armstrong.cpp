#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n)
{
    int sum = 0;
    int temp = n;
    while (n != 0)
    {
        int dig = n % 10;
        sum += dig * dig * dig;
        n = n / 10;
    }
    return (sum == temp);
}

int main()
{
    int n;
    cin >> n;

    cout << armstrong(n);

    return 0;
}