#include <iostream>

/*
Programa 11
Encontrar el segundo entero positivo mayor en una lista de 15 numeros.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int n, auxiliar;
    cout<<"Ingrese tamaño del arreglo: ";
    cin>>n;
    int arr[n];
    for(int l=0;l<n;l++)
    {
        arr[l]=rand()%10;
    }
     for(int x=0;x<n;x++)
    {
        for(int y=0;y<n;y++)
        {
            if(arr[y]<arr[y+1])
            {
                auxiliar=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=auxiliar;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<": "<<arr[i]<<endl;
    }
    cout<<"el numero mas alto es: "<<arr[1];
}