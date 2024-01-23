#include <bits/stdc++.h>
using namespace std;

void print_1_to_n(int i, int n)
{

    if (i > n)
    {
        return;
    }

    cout << i << endl;
    print_1_to_n(++i, n);
}

int main()
{
    int n;
    cin >> n;

    print_1_to_n(1, n);

    return 0;
}
