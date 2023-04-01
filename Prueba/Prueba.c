#include <stdio.h>
#include <regex>
#define TAM 100
Numero = "[0-9]*";
id = "\A(con)+[a_zA_Z]*";
Extencion = "\A(.com|.net)\Z";
Correos = "\A(hotmail|outlook|gmail)\Z";
 Correo = "\A[a-zA-Z0-9]+(@)",CorreosExtencion;
 Url = "\A(w{3}.|https://)[a-zA-Z0-9]", Extencion;

int main()
{
    char a[TAM];
    puts("Ingrese texto: ");
    gets(a);

    if(regex_match(a,Correo))
    {
        printf("Es un Correo.");
    }
    else
    {
        printf("ERROR");
    }
}