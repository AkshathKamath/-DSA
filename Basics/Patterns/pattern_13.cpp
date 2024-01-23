#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        int breakp = (2 * i + 1) / 2;
        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakp)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
