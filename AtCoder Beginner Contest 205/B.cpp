#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//va del a al N
//n(n+1)/2
int main(){
    long long int n;
    cin>>n;
    long long int n2=n;
    long long int sum=0;
    map<long long int,int>res;
    while(n2--)
    {
        long long int temp;
        
        cin>>temp;
        if(res[temp]==0)
        {
            res[temp]++;
        }
        else{
            n2=0;
            sum=0;
            //cout<<"cenizas"<<endl;
        }
        sum+=temp;
    }
    if((n*(n+1)/2)==sum)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}