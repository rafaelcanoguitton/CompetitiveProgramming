#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long int a,b,c,d;
    cin>>a;cin>>b;cin>>c;cin>>d;
    if(b>(c*d)){
        cout<<-1<<endl;
    }
    else{
        long int i=0;
        while((a+i*b)>(i*(c)*d))
        {
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}