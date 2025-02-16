#include <stdio.h>
#include <stdlib.h>

#define descuento 0.20

int main()
{
    /// Declaramos variables
    float compra, total;

    /// Entrada de datos
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);

    /// Logica
    total = compra - (compra * descuento);

    if (compra > 5000) {
        printf("El total a pagar con el descuento es: %f", total);
    }
    else {
        printf("El total a pagar es: %f \nNo se llego al total para el descuento \n", compra);
    }

    return 0;
}
