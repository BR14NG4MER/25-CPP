#include <iostream>

/*
Programa 10
Encontrar el entero positivo mayor en una lista de 15 numeros.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int numeros[15];
    int auxiliar;
    for(int x=1;x<=15;x++)
    {
        cout<<"Ingrese numero: ";
        cin >> numeros[x];
    }
    for(int x=0;x<=15-1;x++)
    {
        for(int y=0;y<=15-1;y++)
        {
            if(numeros[y]<numeros[y+1])
            {
                auxiliar=numeros[y];
                numeros[y]=numeros[y+1];
                numeros[y+1]=auxiliar;
            }
        }
    }
    for(int x=0;x<15;x++)
    {
        cout<<numeros[x]<<endl;
    }
    cout<<"el numero mas alto es: "<<numeros[0];
}