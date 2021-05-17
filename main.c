#include <stdio.h>
#include <stdlib.h>

/*
1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un
producto y devuelva el valor del producto con un descuento del 5%.
Realizar la llamada desde el main. *

2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como
primer parámetro y un carácter como segundo y devuelva la cantidad de veces
que ese carácter aparece en la cadena


3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita
ordenar un array de dicha estructura por marca. Ante igualdad de marca deberá ordenarse por precio.
Hardcodear datos y mostrarlos desde el main. *
*/

typedef struct{
int id;
char procesador[20];
char marca[20];
float precio;
}eNotebook;

int aplicarDescuento(float* precio);

int contarCaracteres(char cadena[], int tam, char caracter);

int ordenarNotebooks(eNotebook lista[], int tam);

int main()
{
   float precio=100;
   int cantidadDeCaracteres;
   eNotebook notebooks[3]={
   {1, "intel", "lenovo", 90000},
   {1, "celeron", "exo", 80000},
   {1, "pipi", "dell", 75000},

   };

   aplicarDescuento(&precio);

   printf("precio con descuento: %.2f\n", precio);

    cantidadDeCaracteres=contarCaracteres("bebeto", 7, 'b');

    printf("cantidad de caracteres: %d\n", cantidadDeCaracteres);

    ordenarNotebooks(notebooks,3);


    return 0;





}

int aplicarDescuento(float* precio)
{
    int todoOk=0;
    float precioConDescuento;

    if(precio!=NULL && precio>0)
    {
        precioConDescuento=*precio-(*precio*0.05);
        *precio=precioConDescuento;
        todoOk=1;
    }


    return todoOk;
}

int contarCaracteres(char cadena[], int tam, char caracter)
{
    int retorno=0;

    if(cadena!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            if(cadena[i]==caracter)
            {
                retorno++;
            }
        }


    }



    return retorno;
}

int ordenarNotebooks(eNotebook lista[], int tam)
{
    int todoOk=0;

    eNotebook auxiliar[tam];

    for(int i=0; i<tam-1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(lista[i].marca>lista[j].marca || (lista[i].marca==lista[j].marca && lista[i].precio>lista[j].precio) )
            {

                auxiliar[i]=lista[i];
                lista[i]=lista[j];
                lista[j]=lista[i];

            }
        }

    }
return todoOk;

}



