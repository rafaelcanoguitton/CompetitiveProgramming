#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a;
    vector<int>b;
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
		vector<int> b(n);
		for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		int res = 0;
		for (int i = 0; i < n; ++i) {
			if (i < k) res += max(a[i], b[i]);
			else res += a[i];
		}
        cout<<res<<endl;
    }
}