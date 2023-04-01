#include <iostream>

/*
Programa 12
Imprimir x tabla de multiplicacion.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int tabla;
    cout<<"Ingrese que tabla desea ver: ";
    cin>>tabla;
    cout<<endl;
    for(int i=0;i<=12;i++)
    {
        cout<<i<<" : "<<tabla<<" * "<<i<<" = "<< tabla*i<<endl;
    }
}
