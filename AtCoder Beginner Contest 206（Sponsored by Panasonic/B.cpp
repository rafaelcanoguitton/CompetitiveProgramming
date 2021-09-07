#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//xd
int main(){
    int n;
    cin>>n;
    int cont=1;
    for(int i=1;i<n;i+=cont)
    {
        cont++;
    }
    cout<<cont<<endl;
    return 0;
}