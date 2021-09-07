#include <bits/stdc++.h>
#include<iostream>
//Algoritmo de potenciación rápida :OOO
//euclides? xd
// puta que huevon son mismas bases, gracias hindus del yutubi son grandes
using namespace std;
int main(){
    long long int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(c%2==0)
    {
        a=abs(a);
        b=abs(b);
        if(a>b)
        {
            cout<<">"<<endl;
        }
        if(a<b)
        {
            cout<<"<"<<endl;
        }
        if(a==b)
        {
            cout<<"="<<endl;
        }
    }
    else
    {
        if(a>b)
        {
            cout<<">"<<endl;
        }
        if(a<b)
        {
            cout<<"<"<<endl;
        }
        if(a==b)
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}