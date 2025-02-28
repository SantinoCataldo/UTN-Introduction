#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila DADA, PAR, IMPAR, AUX, TEMP;
    int esPar = 1;
    int elemento;

    inicpila(&DADA);
    inicpila(&PAR);
    inicpila(&IMPAR);
    inicpila(&AUX);
    inicpila(&TEMP);

     printf("Ingrese elementos para la pila DADA (terminar con 0): \n");
    do {
        leer(&DADA);
    } while (tope(&DADA) != 0);
    desapilar(&DADA);

    printf("\nPila DADA: ");
    mostrar(&DADA);

    while(!pilavacia(&DADA))
    {
        elemento = desapilar(&DADA);
        apilar(&AUX, elemento);

        if(!pilavacia(&DADA))
        {
            elemento = desapilar(&DADA);
            apilar(&AUX, elemento);
        }
        else
        {
            esPar = 0;
        }
    }

    while(!pilavacia(&AUX))
    {
        apilar(&TEMP, desapilar(&AUX));
    }

    while(!pilavacia(&TEMP))
    {
        apilar(&DADA, desapilar(&TEMP));
    }

    if(!pilavacia(&DADA))
    {
        if(esPar)
        {
            apilar(&PAR, desapilar(&DADA));
            printf("\nLa cantidad de elementos en la pila DADA es PAR.\n");
        }
        else
        {
            apilar(&IMPAR, desapilar(&DADA));
            printf("\nLa cantidad de elementos en la pila DADA es IMPAR.\n");
        }
    }
    else
    {
        printf("\nLa pila DADA esta vacia. \n");
    }

    if(esPar == 1){
        printf("\nPila PAR:");
        mostrar(&PAR);
    }else{
        printf("\nPila IMPAR:");
        mostrar(&IMPAR);
    }

    return 0;
}
