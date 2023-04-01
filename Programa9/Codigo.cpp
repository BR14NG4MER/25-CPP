#include <iostream>

/*
Programa 9
Ingresar 25 numeros enetros positivos y determinar si es impar o par.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int numeros[25];
    int resultado;
    for(int i=0;i<=25;i++)
    {
        cout<<"Ingrese numero: ";
        cin>>i;cout<<endl;
        numeros[i]=i;
        //system("clear");
    }
    for(int x=1;x<=25;x++)
    {
        resultado=numeros[x]%2;
        if(resultado==0)
        {
            cout<<"El numero "<<numeros[x]<<" es par.\n";
        }
        else
        {
            cout<<"El numero "<<numeros[x]<<" es impar.\n";
        }
    }
}