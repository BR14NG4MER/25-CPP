#include <iostream>

/*
Programa 8
Determinar si un numero entero es par o impar.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int a, resultado;
    cout<<"Ingrese numero: ";
    cin>>a;
    cout<<"\n";
    resultado=a%2;
    if(resultado==0)
    {
        cout<<"El numero "<<a<<" es par.\n";
    }
    else
    {
        cout<<"El numero "<<a<<" es impar.\n";
    }
}