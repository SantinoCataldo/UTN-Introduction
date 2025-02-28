#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
    Pila modelo, dada, aux, auxModelo;

    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&auxModelo);

   printf("Ingrese los elementos para la pila MODELO (terminar con 0): \n");
    do {
        leer(&modelo);
    } while (tope(&modelo) != 0);

    printf("Ingrese elementos para dada (terminar con 0): \n");
    do {
        leer(&dada);
    } while (tope(&dada) != 0);

    while (!pilavacia(&dada)) {
        int datoDada = desapilar(&dada);
        int encontrado = 0;

        while (!pilavacia(&modelo)) {
            int datoModelo = desapilar(&modelo);
            apilar(&auxModelo, datoModelo);

            if (datoDada == datoModelo) {
                encontrado = 1;
                break;
            }
        }

        while (!pilavacia(&auxModelo)) {
            apilar(&modelo, desapilar(&auxModelo));
        }

        if (!encontrado) {
            apilar(&aux, datoDada);
        }
    }

    while (!pilavacia(&aux)) {
        apilar(&dada, desapilar(&aux));
    }

    printf("\nPila DADA después de eliminar los elementos que estaban en MODELO:\n");
    mostrar(&dada);

    return 0;
}
