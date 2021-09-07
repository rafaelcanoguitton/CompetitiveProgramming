#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
// Function to calculate the smallest multiple
int closestMultiple(int n, int x)
{  
    if(x>n)
       return x;
 
    n = n + x/2;
    n = n - (n%x);
    return n;
}
 
// driver program
int main()
{
    long int n = 100, x = 3;
    int v=4;
    cin>>x;cin>>v;
    n=100*v;
    long int a=closestMultiple(n,x);
    while(a<100){
        a+=x;
    }
    double b=0.1*x/10;
    double c=(0.1*a)/10;
    
    cout<<(c/b)+v-1<<endl;
    return 0;
}