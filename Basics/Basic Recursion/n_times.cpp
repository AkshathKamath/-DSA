#include <bits/stdc++.h>
using namespace std;

void print_n_times(int i, int n)
{

    if (i > n)
    {
        return;
    }

    cout << "AK" << endl;
    print_n_times(++i, n);
}

int main()
{
    int n;
    cin >> n;

    print_n_times(1, n);

    return 0;
}
