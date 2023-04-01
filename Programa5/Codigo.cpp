#include <iostream>
/*
Programa 5
Convertir pulgadas a yardas y pies a pulgadas.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;


int main()
{
    double a,b;
    int opc;
    cout<<"Ingrese que desea convertir\n";
    cout<<"1)Pulgadas a Yardas.\n";
    cout<<"2)Pies a Pulgadas.\n";
    cin >> opc;
    if(opc==1)
    {
        cout<<"Ingrese pulgadas: ";
        cin>>a;
        b=a*0.027778;
        cout<<a<<" pulgadas es igual a "<<b<<" yardas\n";
    }
    else if (opc==2)
    {
        cout<<"Ingrese pies: ";
        cin>>a;
        b=a*11.999976;
        cout<<a<<" pies es igual a "<<b<<" pulgadas\n";
    }
    else
    {
        cout<<"Opcion Invalida.\n";
    }
}