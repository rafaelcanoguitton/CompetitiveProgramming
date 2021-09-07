#include <iostream>

int main()
{
    int x;int y;
    std::cout<<"Numero de filas:";
    std::cin>>x;
    std::cout<<std::endl;
    y=x+1;
    std::cout<<std::endl;
  double m[x][y];
  for(int i=0;i<x;i++)
    {
      for(int j=0;j<y;j++)
        {
            double temp;
            std::cout<<"Ingrese elemento "<<i+1<<" de la fila "<<j+1<<" : ";
            std::cin>>temp;
            std::cout<<std::endl;
            m[i][j]=temp;
        }
    }
    std::cout<<"Matriz "<<std::endl;
    //Mostrar matrix//
	for(int i=0;i<x;i++)
    {
        std::cout<<" | ";
        for(int j=0;j<y-1;j++)
        {
                std::cout<<"\t"<<m[i][j]<<"\t";
        }
        std::cout<<" |\t";
        std::cout<<" | "<<m[i][y-1]<<" | "<<std::endl;
    }
    /////////////////////////////////
    for(int k=0;k<x-1;k++)
        for(int i=k+1;i<x;i++)
        {
            if(m[i][k]!=0)
            {
                double t=m[k][k]/m[i][k];
                for(int j=k;j<x;j++)
                {
                    m[i][j]=m[k][j]-m[i][j]*t;
                }
                m[i][x]=m[k][x]-m[i][x]*t;
            }
        }
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    for(int i=0;i<x;i++)
    {
        std::cout<<" | ";
        for(int j=0;j<y-1;j++)
        {
                std::cout<<"\t"<<m[i][j]<<"\t";
        }
        std::cout<<" |\t";
        std::cout<<" | "<<m[i][y-1]<<" | "<<std::endl;
    }
    double a[x];
    a[x-1]=m[x-1][x]/m[x-1][x-1];
    for(int i=x-2;x<-1;i--)
        {
            double aux=0;
            for(int j=i+1;j<x;j++)
            {
                aux+=m[i][j]*a[j];
            }
            a[i]=(m[i][x]-aux)/m[i][i];
        }
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    for(int i=0;i<x;i++)
    {
        std::cout<<"x"<<i+1<<" = "<<a[i]<<std::endl;
    }
  return 0;
}
