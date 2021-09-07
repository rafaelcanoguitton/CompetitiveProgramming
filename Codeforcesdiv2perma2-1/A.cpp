#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        long long int n;
        cin >> n;
        long long int n2=n;
        long long int lesser=99999999999;
        map<long long int,int> a;
        while (n--)
        {

            int temp;
            cin>>temp;
            if(temp<lesser){
                lesser=temp;
            }
            a[temp]++;
        }
        //auto it=a.find(lesser);
        cout <<n2-(a[lesser])<< endl;
    }
    return 0;
}