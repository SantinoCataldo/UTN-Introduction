#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada, aux1, aux2;
    int elementos;

    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    printf("Ingrese el total: ");
    scanf("%d", &elementos);

    printf("Ingrese los %d elementos de DADA: \n", elementos);
    for(int i = 0; i < elementos ; i++){
        leer(&dada);
    }
    printf("DADA antes: ");
    mostrar(&dada);

     for(int i = 0; i < elementos - 1; i++){
        apilar(&aux1, desapilar(&dada));
    }

    printf("DADA despues: ");
    mostrar(&dada);

    return 0;
}
