#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila origen, destino, aux;

    inicpila(&origen);
    inicpila(&destino);
    inicpila(&aux);

    printf("Ingrese los 5 elementos de ORIGEN: \n");
    for(int i = 0; i < 5; i++){
        leer(&origen);
    }

    printf("\nValor de ORIGEN: \n");
    mostrar(&origen);

    while (!pilavacia(&origen)){
        apilar(&aux, desapilar(&origen));
    }

    while (!pilavacia(&aux)){
        apilar(&destino, desapilar(&aux));
    }

    printf("\nValor del DESTINO: \n");
    mostrar(&destino);

    return 0;
}
