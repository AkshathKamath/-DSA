#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
