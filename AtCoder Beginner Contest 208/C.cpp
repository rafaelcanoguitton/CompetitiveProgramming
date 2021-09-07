#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;cin>>k;
    vector<int> pasort;
    vector<int> sinsort;
    map<int,int> awa;
    int n2=n;
    while(n--)
    {
        int temp;
        cin>>temp;
        pasort.push_back(temp);
        sinsort.push_back(temp);
        awa[temp]=0;
    }
    int gencount=0;
    while(k>n2)
    {
        gencount+=n2;
        k-=n2;
    }
    return 0;
}