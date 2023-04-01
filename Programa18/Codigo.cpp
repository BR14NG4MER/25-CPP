#include <iostream>
#include <math.h>

/*
Programa 18
Calcular la suma de los cuadrado desde 1 a N numeros.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

class SumaCuadrada
{
    public: int Suma(int n,int x,int suma)
    {
        if(x==n)
        {
            return suma=suma+pow(x,2);
        }
        else
        {
            suma=suma+pow(x,2);
            return Suma(n,x+1,suma);
        }
    }
};
int main()
{
    SumaCuadrada Scuadrada;
    int n;
    cout<<"Ingrese hasta que numero desea realizar la suma: ";
    cin>>n;
    cout<<endl;
    cout<<"El resultado es " <<Scuadrada.Suma(n,1,0)<<endl;
}