#include <iostream>

/*
Programa 23
Conversion de Libras a Dolares.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

int main()
{
    double libras, dolares;
    char opc;
    do
    {
        cout<<endl;
        cout<<"¿Que conversion desea realizar?"<<endl;
        cout<<"1) Dolares a Libras"<<endl;
        cout<<"2) Libras a Dolares"<<endl;
        cout<<"3) Salir"<<endl;
        cout<<"Seleccione opcion: ";
        cin>>opc;
        switch (opc)
        {
        case '1':
        cout<<"DOLARES A LIBRAS"<<endl;
        cout<<"Ingrese cantidad a convertir: ";
        cin>>dolares;
        cout<<(libras=dolares/2.8);
            break;
        case '2':
        cout<<"LIBRAS A DOLARES"<<endl;
        cout<<"Ingrese cantidad a convertir: ";
        cin>>libras;
        cout<<(dolares=libras*2.8);
            break;
        default:
        cout<<"Opcion Invalida";
            break;
        }
    } while (opc!='3');
    
}