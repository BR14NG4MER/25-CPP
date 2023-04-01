#include <iostream>

/*
Programa 16
Calcular el factorial de un numero.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

class factorial
{
    public: int fact(int x)
    {
        if(x==0)
        {
            return 1;
        }
        else
        {
            return x*fact(x-1);
        }
    }
};

int main()
{
    factorial factorial;
    int x, y;
    cout<<"Ingrese numero: ";
    cin>>x;
    y=factorial.fact(x);
    cout<<"--------------------------"<<endl;
    cout<<"El factorial del numero "<<x<<" es "<<y;
}
