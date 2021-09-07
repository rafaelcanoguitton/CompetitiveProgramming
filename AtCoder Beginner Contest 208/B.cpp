#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    //hardcoded factorials
    int hard_facs[10] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    int count = 0;
    int i = 9;
    while (i >= 0)
    {
        if (hard_facs[i] <= a)
        {
            while (a >= hard_facs[i])
            {
                a = a - hard_facs[i];
                count++;
            }
        }
        i--;
    }
    cout << count << endl;
    return 0;
}