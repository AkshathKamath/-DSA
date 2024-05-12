#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void substringsWithNoConsec1(int n, string temp, vector<string> ans)
{
    if (temp.length() == n)
    {
        cout << temp << " ";
        ans.push_back(temp);
        return;
    }
    if (temp.length() == 0)
    {
        temp += '0';
        substringsWithNoConsec1(n, temp, ans);
        temp.pop_back();
        temp += '1';
        substringsWithNoConsec1(n, temp, ans);
    }
    else
    {
        if (temp[temp.length() - 1] == '1')
        {
            temp += '0';
            substringsWithNoConsec1(n, temp, ans);
        }
        else
        {
            temp += '0';
            substringsWithNoConsec1(n, temp, ans);
            temp.pop_back();
            temp += '1';
            substringsWithNoConsec1(n, temp, ans);
        }
    }
}

int main()
{

    int n = 3;
    vector<string> ans;
    string temp = "";
    substringsWithNoConsec1(n, temp, ans);

    return 0;
}