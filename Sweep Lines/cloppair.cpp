#include <bits/stdc++.h>
using namespace std;
#define px second
#define py first
typedef pair<long long, long long> pairll;
pairll pnts[100000];
pairll pnts2[100000];
set<pairll> box;
double best;
long long is, iis, js, jjs;
int compare(pairll a, pairll b)
{
    return a.px < b.px;
}
void closest_pair(int n)
{
    sort(pnts, pnts + n, compare);
    best = 1500000000;
    box.insert(pnts[0]);
    int left = 0;
    for (int i = 1; i < n; ++i)
    {
        while (left < i && pnts[i].px - pnts[left].px > best)
            box.erase(pnts[left++]);
        for (auto it = box.lower_bound(make_pair(pnts[i].py - best, pnts[i].px - best)); it != box.end() && pnts[i].py + best >= it->py; it++)
        {
            if (best > sqrt(pow(pnts[i].py - it -> py, 2.0) + pow(pnts[i].px - it->px, 2.0)))
            {
                is = pnts[i].px;
                iis = pnts[i].py;
                js = it->px;
                jjs = it->py;
                best = sqrt(pow(pnts[i].py - it->py, 2.0) + pow(pnts[i].px - it->px, 2.0));
            }
        }
        box.insert(pnts[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        long long a;
        long long b;
        cin >> a >> b;
        pnts[i].px = a;
        pnts[i].py = b;
        pnts2[i].px = a;
        pnts2[i].py = b;
    }
    closest_pair(n);
    int is1, is2;
    for (int i = 0; i < n; i++)
    {
        if (is == pnts2[i].px && iis == pnts2[i].py)
        {
            is1 = i;
        }
        else if (js == pnts2[i].px && jjs == pnts2[i].py)
        {
            is2 = i;
        }
    }
    if (is2 < is1)
    {
        swap(is1, is2);
    }
    cout << is1;
    cout << " " << is2 << " ";
    cout << std ::fixed;
    cout << std ::setprecision(6);
    cout << best;
    return 0;
}
