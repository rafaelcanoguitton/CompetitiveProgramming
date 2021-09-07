#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//A=(A_1,A_2,A_3,...,A_N)
//B=(B1,B2,…,BN)
//C=(C1,C2,…,CN)
int main()
{
    int n;
    cin>>n;
    map<int,int>A;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        A[temp]++;
    }
    vector<int>B;
    map<int,int>C;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        B.push_back(temp);
    }
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        C[temp]++;
    }
    long long int count=0;
    for(int i=0;i<n;i++){
        auto search=A.find(B[i]);
        if(search!=A.end()){
            auto search2=C.find(i+1);
            count+=search2->second*search->second;
        }
    }
    cout<<count<<endl;
    return 0;
}