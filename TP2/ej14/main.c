#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
    Pila dada, par, impar, aux;

    // Inicialización de las pilas
    inicpila(&dada);
    inicpila(&par);
    inicpila(&impar);
    inicpila(&aux);

    // Cargar la pila DADA
    printf("Ingrese elementos para la pila DADA (terminar con 0): \n");
    do {
        leer(&dada);
    } while (tope(&dada) != 0);
    desapilar(&dada);  // Eliminar el 0 de la pila DADA

    // Alternar los elementos entre PAR e IMPAR sin usar contador
    int alternar = 1;  // Usamos alternar para decidir en qué pila poner el elemento

    while (!pilavacia(&dada)) {
        int valor = desapilar(&dada);  // Desapilamos el valor de DADA

        // Si alternar es 1, lo ponemos en la pila PAR, si es 0 lo ponemos en IMPAR
        if (alternar) {
            apilar(&par, valor);
        } else {
            apilar(&impar, valor);
        }

        // Cambiar el valor de alternar para el siguiente elemento
        alternar = !alternar;
    }

    // Mostrar las pilas PAR e IMPAR
    printf("\nElementos en la pila PAR:\n");
    mostrar(&par);

    printf("\nElementos en la pila IMPAR:\n");
    mostrar(&impar);

    return 0;
}
