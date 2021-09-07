#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//xd
int main(){
    long long int n;
    cin>>n;
    map<long long int,long long int> frecuencias;
    vector<int> actualnum; 
    int actual_size=-1;
    while(n--)
    {
        long long int temp;
        cin>>temp;
        if(!(frecuencias.find(temp)!=frecuencias.end()))
        {
            actualnum.push_back(temp);
        }
        frecuencias[temp]++;
        actual_size++;
    }
    long long int cont=0;
    for(auto it = actualnum.begin(); it != actualnum.end(); ++it)
    {
        cont+=frecuencias[*it]*(actual_size-(frecuencias[*it]-1));
        actual_size-=frecuencias[*it];
    }
    cout<<cont<<endl;
    return 0;
}