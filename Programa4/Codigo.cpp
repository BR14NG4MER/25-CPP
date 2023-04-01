#include <iostream>

/*
Programa 4
Imprimir los numeros enteros del 1 al 50 y su reciproco.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int a=1;
    while(a<=50)
    {
        cout<< a << " su reciproco es 1/" << a << endl;
        a=a+1;
    }
}