#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  compra, suma;
    const float  descuento = 0.15;

    printf("Introduzca el total de la compra: ");
    scanf("%f", &compra );

    suma = compra - (compra * descuento);

    printf("Se aplico el descuento del 15%% a tu compra de $%f \nEl total a pagar es de: $%f\n", compra, suma);
    return 0;
}
