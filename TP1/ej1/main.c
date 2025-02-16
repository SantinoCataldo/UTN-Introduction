#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  capital, total;
    const float  porcentaje = 0.02;

    printf("Introduzca su capital: ");
    scanf("%f", &capital);

    total = capital + (capital * porcentaje);

    printf("El monto obtenido de $%f despues de un mes es de: $%f\n", capital, total);
    return 0;
}
