#include "iostream"
using namespace std;

int main(){
    int x;
    cin>>x;
    while(x){
        cout<<"Acasta tu huevada: "<<x%10<<endl;
        x=x/10;
    }
    return 0;
}
