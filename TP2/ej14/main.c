#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
    Pila dada, par, impar, aux;

    inicpila(&dada);
    inicpila(&par);
    inicpila(&impar);
    inicpila(&aux);

    printf("Ingrese elementos para la pila DADA (terminar con 0): \n");
    do {
        leer(&dada);
    } while (tope(&dada) != 0);
    desapilar(&dada);

    int alternar = 1;

    while (!pilavacia(&dada)) {
        int valor = desapilar(&dada);
        if (alternar) {
            apilar(&par, valor);
        } else {
            apilar(&impar, valor);
        }
        alternar = !alternar;
    }

    printf("\nElementos en la pila PAR:\n");
    mostrar(&par);

    printf("\nElementos en la pila IMPAR:\n");
    mostrar(&impar);

    return 0;
}
