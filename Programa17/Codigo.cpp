#include <iostream>

/*
Programa 17
Calcular la secuencia fibonacci de un numero.
*/

//@Author   BR14NG4MER
//@Date     31 de marzo del 2023

using namespace std;

class fibonacci
{
    public: int fibo(int x)
    {
        if(x==0||x==1)
        {
            return 1;
        }
        else
        {
            return x=fibo(x-1)+fibo(x-2);
        }
    }
};
int main()
{
    int x, y;
    fibonacci fibonacci;
    cout<<"Ingrese numero para obtener secuencia: ";
    cin>>x;
    y<<fibonacci.fibo(x);
    cout<<"------------------------------"<<endl;
    cout<<"El fibonacci de "<< x <<" es "<<y;
}