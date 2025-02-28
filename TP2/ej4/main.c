#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila origen, destino, aux;

    inicpila(&origen);
    inicpila(&destino);
    inicpila(&aux);

    printf("Ingrese elementos para origen (terminar con 0): \n");
    do {
        leer(&origen);
    } while (tope(&origen) != 0);

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
