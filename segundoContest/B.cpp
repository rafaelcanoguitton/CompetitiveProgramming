#include <iostream>
#include <string> 
using namespace std;

int main(){
    long long n;
    cin>>n;
    int k;
    cin>>k;
    while(k--)
    {
        if(n%200==0)
        {
            n=n/200;
        }
        else{
            n=(n*1000)+200;
        }
    }
    cout<<n<<endl;
    return 0;
}