#include <iostream>
#include <math.h>

/*
Programa 15
Calcular e imprimir las potencias cuartas de los primeros 50 numeros enteros.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int x;
    for(int i=1;i<=50;i++)
    {
        x=pow(i,4);
        cout<<i<<": "<<x<<endl;
    }
}