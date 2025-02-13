#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, total;
    float porcentajeH, porcentajeM;

    printf("Ingrese la cantidad de hombres: ");
    scanf("%d", &h);

    printf("Ingrese la cantidad de mujeres: ");
    scanf("%d", &m);

    total = h + m;

    porcentajeH = (h / (float)total)*100;
    porcentajeM = (m / (float)total)*100;

    printf("El porcentaje de hombres es: %%%f \nEl porcentaje de mujeres es: %%%f", porcentajeH, porcentajeM );
    return 0;
}
