#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    int horas, pago, horasExtra, pagoExtra, horasMaximas = 40;

    /// Entrada de datos
    printf("Ingrese la cantidad de horas que hizo: ");
    scanf("%d", &horas);

    /// Logica
    if (horas <= horasMaximas) {
        pago = horas * 300;
        printf("El pago es: $%d", pago);
    }
    else {
        pago = horasMaximas * 300;
        horasExtra = horas - horasMaximas;
        pagoExtra = pago + (horasExtra * 400);
        printf("El pago con las horas extra es: $%d", pagoExtra);
    }

    return 0;
}
