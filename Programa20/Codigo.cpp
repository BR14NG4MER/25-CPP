#include <iostream>
#include <string>

/*
Programa 20
Identificar si una palabra es un palindromo.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    string texto, texto2;
    cout<<"Texto a revisar: ";
    cin>>texto;
    for(int i=texto.size()-1;i>=0;i--)
    {
        texto2=texto2.append(1, texto[i]);
    }
    if(texto2==texto)
    {
        cout<<"Es un palindromo"<<endl;
    }
    else
    {
        cout<<"No es un palindromo"<<endl;
    }
}