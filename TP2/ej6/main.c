#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada, aux1, aux2;

    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    printf("Ingrese los 5 elementos de DADA: \n");
    for(int i = 0; i < 5; i++){
        leer(&dada);
    }

    printf("DADA antes: ");
    mostrar(&dada);

    apilar(&aux1, desapilar(&dada));

    while (!pilavacia(&dada)){
        apilar(&aux2, desapilar(&dada));
    }

    apilar(&aux2, desapilar(&aux1));

    while (!pilavacia(&aux2)){
        apilar(&dada, desapilar(&aux2));
    }

    printf("DADA despues: ");
    mostrar(&dada);

    return 0;
}
