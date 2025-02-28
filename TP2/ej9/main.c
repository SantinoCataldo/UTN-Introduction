#include <stdio.h>
#include "pila.h"

int main() {
    Pila pilaA, pilaB, aux;

    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&aux);

    printf("Ingrese elementos para la pila A (terminar con 0): \n");
    do {
        leer(&pilaA);
    } while (tope(&pilaA) != 0);

    printf("Ingrese elementos para la pila B (terminar con 0): \n");
    do {
        leer(&pilaB);
    } while (tope(&pilaB) != 0);

    mostrar(&pilaA);
    mostrar(&pilaB);

    while (!pilavacia(&pilaA) && !pilavacia(&pilaB)) {
        apilar(&aux, desapilar(&pilaA));
        apilar(&aux, desapilar(&pilaB));
    }

    if (pilavacia(&pilaA) && pilavacia(&pilaB)) {
        printf("\nLas pilas A y B tienen la misma cantidad de elementos.\n");
    } else if (pilavacia(&pilaA)) {
        printf("\nLa pila B tiene mas elementos que la pila A.\n");
    } else {
        printf("\nLa pila A tiene mas elementos que la pila B.\n");
    }

    return 0;
}
