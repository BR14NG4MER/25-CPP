#include <iostream>

/*
Programa 24
Conversion de unidades de clima celsius  y fahrenheit.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    int C, F;
        char opc;
    do
    {
        cout<<endl;
        cout<<"¿Que conversion desea realizar?"<<endl;
        cout<<"1) Celsius a Fahrenheit"<<endl;
        cout<<"2) Fahrenheit a Celsius"<<endl;
        cout<<"3) Salir"<<endl;
        cout<<"Seleccione opcion: ";
        cin>>opc;
        switch (opc)
        {
        case '1':
        cout<<"CELCIUS A FAHRENHEITH"<<endl;
        cout<<"Ingrese unidades a convertir: ";
        cin>>C;
        F=(C*1.8)+32;
        cout<<F;
            break;
        case '2':
        cout<<"FAHRENHEITH A CELCIUS"<<endl;
        cout<<"Ingrese unidades a convertir: ";
        cin>>F;
        cout<<(C=F-32*(1.8));
            break;
        default:
        cout<<"Opcion Invalida";
            break;
        }
    } while (opc!='3');
}