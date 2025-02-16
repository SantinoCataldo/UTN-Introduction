#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    int num1, num2, num3;

    /// Entrada de datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    /// Logica
    if (num1 > num2 && num1 > num3){
        printf("\nEl numero %d es el mayor \n", num1);
    }
    else if (num2 > num1 && num2 > num3){
        printf("\nEl numero %d es el mayor \n", num2);
    }
    else {
        printf("\nEl numero %d es el mayor \n", num3);
    }
    return 0;
}
