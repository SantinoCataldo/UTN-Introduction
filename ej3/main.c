#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila dada, distintos, aux;
    inicpila(&dada);
    inicpila(&distintos);
    inicpila(&aux);
    int Valor;

    printf("Ingrese los 5 elementos de DADA: \n");
    for(int i = 0; i < 5; i++){
        leer(&dada);
    }

    while(!pilavacia(&dada)) {
        if(tope(&dada) != 8) {
            apilar(&distintos, desapilar(&dada));
        } else {
            apilar(&aux, desapilar(&dada));
        }
    }

    printf("\nNumeros distintos a 8: \n");
    mostrar(&distintos);

    return 0;
}
