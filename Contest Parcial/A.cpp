#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=3;
    vector<int> numeros;
    while(i--)
    {
        int temp;
        cin>>temp;
        numeros.push_back(temp);
    }
    sort(numeros.begin(),numeros.end());
    if(numeros[2]-numeros[1]==numeros[1]-numeros[0])
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}