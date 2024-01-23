#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*age<18-> inelgible, age<57 eligible but >54 retirement soon, >57-> retirement*/
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Ineligible";
    }
    else if (age < 57)
    {
        cout << "Eligible";
        if (age > 54)
        {
            cout << ", but retirement soon";
        }
    }
    else
    {
        cout << "Retirement";
    }

    return 0;
}