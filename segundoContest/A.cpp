#include <iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    int count=0;
    while(year>0)
    {
        year=year-100;
        count++;
    }
    cout<<count<<endl;
    return 0;
}