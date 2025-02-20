#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///declaramos variables

    int i;
    float suma, nota, promedio;

    /// Logica
    for (i = 0; i < 7; i++) {
        printf("Ingrese la nota n%d: ", i + 1);
        scanf("%f", &nota);

        suma += nota;
    }

    promedio = suma / 7;

    printf("El promedio del alumno es: %.2f\n", promedio);
    return 0;
}
