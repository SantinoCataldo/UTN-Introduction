#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada, aux1, aux2;

    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    printf("Ingrese los 5 elementos de ORIGEN: \n");
    for(int i = 0; i < 5; i++){
        leer(&dada);
    }

    printf("\nValor de DADA: \n");
    mostrar(&dada);

    while (!pilavacia(&dada)){
        apilar(&aux1, desapilar(&dada));
    }

    while (!pilavacia(&aux1)){
        apilar(&aux2, desapilar(&aux1));
    }

    while (!pilavacia(&aux2)){
        apilar(&dada, desapilar(&aux2));
    }

    printf("\nValor de DADA inverso: \n");
    mostrar(&dada);

    return 0;
}
