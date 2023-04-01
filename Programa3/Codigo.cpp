#include <iostream>

/*
Programa 3
Imprimir los numeros enteros pares del 2 al 48.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int a=2;

    while(a<=48)
    {
        if(a%2==0)
        {
            cout<<a<<" ";
            a=a+1;
        }
        else
        a=a+1;
    }
    cout<<"\n";
}