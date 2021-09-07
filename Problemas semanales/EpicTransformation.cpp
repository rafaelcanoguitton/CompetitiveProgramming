//EpicTransformation
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void flujo_principal(){
    int n;
    cin>>n;
    map<int, int>pairs;
    while(n--){
        int temp;
        cin>>temp;
        pairs[temp]++;
    }
    priority_queue<int>colita;
    for(auto i : pairs){
        colita.push(i.second);
    }
    while(colita.size()>3){
        int a=colita.top();
        colita.pop();
        int b=colita.top();
        colita.pop();
        a=a-b;
        if(a)
        {
            colita.push(a);
        }
    }
    if(colita.size()==2)
    {
        int a=colita.top();
        colita.pop();
        int b=colita.top();
        colita.pop();
        a=a-b;
        if(a)
            {
                colita.push(a);
            }
    }
    cout<<"COMO NO VAS A ENTRAR HIJO DE PUTA"<<colita.size()<<endl;
    if(colita.size()==3)
    {
        int a=colita.top();
        colita.pop();
        int b=colita.top();
        colita.pop();
        int c=colita.top();
        colita.pop();
        if(a!=c)
        {
            a=a-b;
            if(a)
            {
                cout<<"Mierda"<<a<<c<<endl;
                a=abs(a-c);
                cout<<"Mierda2"<<a<<c<<endl;
            }
            if(a)
            {
                colita.push(a);
            }
        }
    }
    if(colita.size()==0){
        cout<<0<<endl;
    }
    else{
        cout<<colita.top()<<endl;
    }
}
int main()
{
    int t;//test cases
    cin>>t;
    vector<long int> data;
    while(t--)
    {
        flujo_principal();
    }
}