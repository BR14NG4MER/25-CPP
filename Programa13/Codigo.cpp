#include <iostream>

/*
Programa 13
Calcular e imprimir la suma de los enteros del 1 al 20
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int x, y;
    x=1;
    do
    {
        y=y+x;
        x++;
    } while (x<=20);
    cout<<"La suma de los numeros es: "<<y<<endl;
    
}