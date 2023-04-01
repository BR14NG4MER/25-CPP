#include <iostream>

/*
Programa 14
Encontrar la suma de todos los enteros pares del 2 al 2,000
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int x,y;
    x=2;
    do
    {
        if(x%2==0)
        {
            y=y+x;
            x++;
        }
        else
        {
            x++;
        }
    }while(x<=2000);
    cout<<"La suma de los enteros pares desde el 2 al 2000 es "<<y<<endl;
}