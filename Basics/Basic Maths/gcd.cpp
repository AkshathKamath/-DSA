#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) // Eucledian algo
{

    while (a > 0 && b > 0)
    { // O(log(phi) minimum(a,b))
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

int main()
{
    // int n;
    // cin>>n;

    cout << gcd(26, 52);

    return 0;
}