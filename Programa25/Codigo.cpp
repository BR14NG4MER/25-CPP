#include <iostream>

/*
Programa 25
Contar calificaciones.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int n, aprobados=0, reprobados=0;
    cout<<"Ingrese tamaño del arreglo: ";
    cin>>n;
    int arr[n];
    for(int l=0;l<n;l++)
    {
        arr[l]=rand()%100;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>65)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }
    cout<<"Aprobados: "<<aprobados<<endl;
    cout<<"Reprobados: "<<reprobados<<endl;
}