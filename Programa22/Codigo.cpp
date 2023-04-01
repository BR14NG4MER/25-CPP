#include <iostream>

/*
Programa 22
Calcular e imprimir el total de segundos en un lapso de tiempo.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int D, H, M, S, total;
    cout<<"Ingrese el lapso de tiempo a calcular...."<<endl;
    cout<<"Dias: ";
    cin>>D;
    cout<<"\nHoras: ";
    cin>>H;
    cout<<"\nMinutos: ";
    cin>>M;
    cout<<"\nSegundos: ";
    cin>>S;
    total=(D*24*60*60)+(H*60*60)+(M*60)+S;
    cout<<"\nEl total de segundos es: "<<total<<endl;
}