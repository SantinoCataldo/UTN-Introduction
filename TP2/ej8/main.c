#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <time.h>

int main()
{
    Pila mazo, jug1, jug2;
    srand(time(NULL));
    int elementos;

    inicpila(&mazo);
    inicpila(&jug1);
    inicpila(&jug2);

    for(int i = 0; i < 10; i++) {
        int num = rand() % 10 + 1;
        apilar(&mazo, num);
    }

    printf("\nMAZO antes de repartir:");
    mostrar(&mazo);

    int turno = 1;
    while (!pilavacia(&mazo)) {
        if (turno) {
            apilar(&jug1, desapilar(&mazo));
        } else {
            apilar(&jug2, desapilar(&mazo));
        }
        turno = !turno;
    }

    printf("\nCartas de jugador 1:");
    mostrar(&jug1);

    printf("\nCartas de jugador 2:");
    mostrar(&jug2);


    return 0;
}
