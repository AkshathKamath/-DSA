#include <bits/stdc++.h>
using namespace std;

void print_n_to_1(int n)
{

    if (n < 1)
    {
        return;
    }

    cout << n << endl;
    print_n_to_1(--n);
}

int main()
{
    int n;
    cin >> n;

    print_n_to_1(n);

    return 0;
}