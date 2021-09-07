#include "iostream"
using namespace std;

double pow(double a, int n) {
  double ret=1;
  while(n) {
    if (n%2 == 1) ret *=a;
    a *= a; n /= 2;
  }
  return ret;
}

int main(){
  cout<<"Ingrese el num"<<endl;
  double x;cin>>x;
  cout<<"Ingrese la potencia"<<endl;
  int y;cin>>y;
  cout<<"resultado es: "<<pow(x,y)<<endl;
  return 0;
}
