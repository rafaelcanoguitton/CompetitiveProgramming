#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string a;
    string b="";
    cin>>a;
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='6'){
            b+='9';                  
        }
        else if(a[i]=='9'){
            b+='6';            
        }
        else{
            b+=a[i];
        }
    }
    cout<<b<<endl;
    return 0;
}