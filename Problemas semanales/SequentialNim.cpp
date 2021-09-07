#include <iostream>
#include <vector>
using namespace std;
int main(){
    int tests;
    cin>>tests;
    while(tests--){
        int n;
        cin>>n;
        int n2=n;
        vector<int>a;
        bool jugador=1;//empieza siendo 1 por si la pila de piedras
        //no tiene elementos
        while(n--){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0;i<n2;i++)
        {   
            //sólo cambiaremos jugadores hasta
            //que alguien pueda controlar el juego
            if(a[i]==1)
                jugador=!jugador;
            else{
                jugador=!jugador;
                break;//lo cual sucede aquí
            }
        }
        if(jugador)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    return 0;
}
