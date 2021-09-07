#include <iostream>
using namespace std;
//N montañas
//la montaña i tiene el nombre S_i y la altura T_i
//devuelve el nombre de la segunda montaña más alta
//se garantiza que todas las montañas tengan diferentes nombres y altitudes
int main(){
    int n;
    cin>>n;
    string store;
    string storef;
    int store2=0;
    int store3=0;
    cin>>store;
    cin>>store2;
    cin>>storef;
    cin>>store3;
    n--;
    n--;
    while(n--)
    {
        string temp;
        int temp2;
        cin>>temp;
        cin>>temp2;
        if(temp2>store2)
        {
            store3=store2;
            store2=temp2;
            storef=store;
            store=temp;
        }
        else if(temp2>store3)
        {
            store3=temp2;
            storef=temp;
        }
    }
    // cout<<"PRIMER NUM"<<store2<<endl;
    // cout<<"segundo unm"<<store3<<endl;
    // cout<<"segundo unm"<<store<<endl;
    // cout<<"segundo unm"<<storef<<endl;
    if(store2<store3)
    {
        cout<<store;
    }
    else
    {
        cout<<storef;
    }
    return 0;
}