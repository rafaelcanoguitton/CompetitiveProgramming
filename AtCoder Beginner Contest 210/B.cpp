#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int conut = 0;
    for (auto i : s)
    {
        if (i == '1')
        {
            break;
        }
        conut++;
    }
    if (conut % 2 == 0)
    {
        cout << "Takahashi" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }
    return 0;
}