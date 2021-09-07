#include <iostream>
#include <cstdio>
using namespace std;
 
int Max(const int a, const int b)
{
    return a>b?a:b;
}
 
int main()
{
    int N, a, b, ans = 0;
    cin>>N;
    while(N--)
    {
        for(int i = 0; i < N; i++)
        {
            cin>>a;cin>>b;
            ans = Max(ans, a+b);
        }
    }
    cout<<ans;
    return 0;
}