#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    float nota1, nota2, nota3, promedio;

    /// Entrada de datos
    printf("Ingresa la primer nota: ");
    scanf("%f", &nota1);

    printf("Ingresa la segunda nota: ");
    scanf("%f", &nota2);

    printf("Ingresa la tercer nota: ");
    scanf("%f", &nota3);

    /// Logica
    promedio = (nota1 + nota2 + nota3)/3;

    if (promedio>=7){
        printf("Aprobado, el promedio es %f", promedio);
    }
    else {
        printf("Desaprobado, el promedio es %f", promedio);
    }

    return 0;
}
