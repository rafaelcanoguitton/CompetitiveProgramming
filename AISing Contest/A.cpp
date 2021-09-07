#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int tests=3;
    int count=0;
    while(tests--)
    {
        int temp;
        cin>>temp;
        if(temp==4){
            count+=3;
        }
        else if(temp==3)
        {
            count+=4;
        }
        else if(temp==1)
        {
            count+=6;
        }
        else if(temp==6)
        {
            count+=1;
        }
        else if(temp==2)
        {
            count+=5;
        }
        else if(temp==5)
        {
            count+=2;
        }
    }
    cout<<count<<endl;
    return 0;
}