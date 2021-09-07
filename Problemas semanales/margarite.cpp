#include <iostream>

long int F(long int x)
{
        if(x%2==0)
            return x/2;
        else
            return -x+F(x-1);
}
int main()
{
    int var;
    std::cin>>var;
    while(var)
    {
        int l,r;
        std::cin>>l>>r;
        std::cout<<F(r)-F(l-1)<<std::endl;
        var--;
    }
    return 0;
}
