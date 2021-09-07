#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    int ans = 0;
    cin>>n>>x; 
    while(n--)
    {
        int a;
        cin>>a;
        if((n+1)%2==0)
        {
            ans+=(a-1);
        }
        else
        {
            ans+=(a);
        }
    }
    if(x-ans<0)
    {
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}