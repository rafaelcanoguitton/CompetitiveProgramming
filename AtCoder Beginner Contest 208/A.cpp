#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    if (a <= b)
    {
        if ((6 * a) < b)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    }
    else
    {
        cout << "No";
    }
    return 0;
}