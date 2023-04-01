#include <iostream>

/*
Programa 2
Imprimir los numeros impares del 8 al 51.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int a=8;

    while(a<=51)
    {
        if(a%2==1)
        {
            cout<<a<<" ";
            a=a+1;
        }
        else
        a=a+1;
    }
    cout<<"\n";
}