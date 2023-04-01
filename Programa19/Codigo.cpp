#include <iostream>

/*
Programa 19
Encontrar el inverso de un numero.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int num, inv;
    inv=0;
    cout<<"Numero a invertir: ";
    cin>>num;
    while(num>0)
    {
        inv=(inv*10)+num % 10;
        num = num / 10;
    }
    cout<<"El numero invertido es: "<<inv<<endl;
}