#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila modelo, dada, aux;
    int elementos;

    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);

    printf("Ingrese el valor de modelo: \n");

    leer(&modelo);

    printf("Ingrese elementos para dada (terminar con 0): \n");
    do {
        leer(&dada);
    } while (tope(&dada) != 0);

    while(!pilavacia(&dada) && !pilavacia(&modelo)){
        if(tope(&dada) == tope(&modelo)){
            desapilar(&dada);
        } else {
            apilar(&aux, desapilar(&dada));
        }
    }

    while (!pilavacia(&aux)){
        apilar(&dada, desapilar(&aux));
    }

    mostrar (&dada);

    return 0;
}
