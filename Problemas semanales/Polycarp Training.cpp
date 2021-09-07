#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
/*
    1er dia-1 problema
    2do dia-2 problemas
    3er dia-3 problemas
    .
    .
    .
    k dia - k problemas

    n contests
    el i-th contest consiste de a_i problemas.

    resuelve k problemas exactamente de este contest
    los otros problemas son descartados

    Si no hay un contest con al menos k problemas,
    entonces polycarp detiene su entrenamiento.

    Cuanto tiempo puede entrenar polycarp si escoje los contest optimamente  
*/

int main(){
    int n;//número de contests
    cin>>n;
    int n2=n;
    priority_queue<int, vector<int>, std::greater<int> > sol;
    while(n--){
        int temp;
        cin>>temp;
        sol.push(temp);
    }
    int dias=1;
    for(int i=0;i<n2;i++)
    {
        if(sol.top()>=dias)
        {
            dias++;
        }
        sol.pop();
    }
    cout<<dias-1;
}