#include <iostream>

/*
Programa 6
Revisar si un entero es multiplo de 6.
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
    resultado=a%6;
    if(resultado==0)
    {
        cout<<"El numero "<<a<<" es multiplo de 6.\n";
    }
    else
    {
        cout<<"El numero "<<a<<" no es multiplo de 6.\n";
    }
}