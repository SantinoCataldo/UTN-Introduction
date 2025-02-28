#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
    Pila dada, limite, mayores, menores;

    inicpila(&dada);
    inicpila(&limite);
    inicpila(&mayores);
    inicpila(&menores);

    printf("Ingrese el valor de LIMITE: \n");
    leer(&limite);

    printf("Ingrese elementos para la pila DADA (terminar con 0): \n");
    do {
        leer(&dada);
    } while (tope(&dada) != 0);

    int topeLimite = tope(&limite);
    printf("El tope de LIMITE es: %d\n", topeLimite);

    while (!pilavacia(&dada)) {
        int datoDada = desapilar(&dada);

        if (datoDada >= topeLimite) {
            apilar(&mayores, datoDada);
        } else {
            apilar(&menores, datoDada);
        }
    }

    printf("\nElementos MAYORES o iguales al tope de LIMITE:\n");
    mostrar(&mayores);

    printf("\nElementos MENORES que el tope de LIMITE:\n");
    mostrar(&menores);

    return 0;
}
