#include <iostream>

/*
Programa 6
Determinar si un número dado es divisible entre 14.
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
    resultado=a%14;
    if(resultado==0)
    {
        cout<<"El numero "<<a<<" es divisible entre 14.\n";
    }
    else
    {
        cout<<"El numero "<<a<<" no es divisible entre 14.\n";
    }
}