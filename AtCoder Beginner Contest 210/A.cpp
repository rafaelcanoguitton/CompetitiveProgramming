#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//se vende col a X yen por cabeza
//si compras más de A cabezas a la vez entonces, la (A+1)ith cabeza
//y subsecuentes cabezas se venderán por Y
int main()
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    if (n < a)
    {
        cout << n * x << endl;
    }
    else
    {
        cout << (a * x) + (n - a) * y << endl;
    }
    return 0;
}
