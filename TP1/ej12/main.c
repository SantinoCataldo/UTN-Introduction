#include <stdio.h>
#include <stdlib.h>

///Libreria para sacar cubo y cuarta
#include <math.h>

int main()
{
    ///Declarar las variables
    int i, num, cubo, cuarta;

    /// Logica
    for (i = 0; i < 10; i++){

    printf ("Ingrese el n%d: ", i + 1);
    scanf ("%d", &num);

    cubo = pow(num, 3);
    cuarta = pow(num, 4);

    ///Imprimimos valores
    printf("El resultado del numero %d: cubo:%d y cuarta:%d \n\n", num, cubo, cuarta);
    }

    return 0;
}
