#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int count=0;
        vector<int>num;
        int aux=1;
        while(x){
            if(x%10!=0){
                count++;
                num.push_back((x%10)*aux);
            }
            aux*=10;
            x/=10;
        }
        cout<<count<<endl;
        for(int i=0;i<num.size();i++){
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}