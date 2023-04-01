#include <iostream>

/*
Programa 21
Calcular e imprimir el total de segundos en diferentes lapsos de tiempo.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int semana1, semana3, mes, mes3d;
    semana1=7*24*60*60;
    semana3=semana1*3;
    mes=semana1*4;
    mes3d=mes+((semana1/7)*3);
    cout<<"Una semana tiene "<<semana1<< " segundos."<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Tres semana tiene "<<semana3<< " segundos."<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Un mes tiene "<<mes<< " segundos."<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Un mes y 3 dias tiene "<<mes3d<< " segundos."<<endl;
    cout<<"----------------------------------------------"<<endl;
}