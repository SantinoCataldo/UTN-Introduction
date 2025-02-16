#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    int num1, num2;

    /// Entrada de datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    /// Logica
    if (num1 > num2){
        printf("El numero %d es mayor que %d \n", num1, num2);
    }
    else if (num1 < num2){
        printf("El numero %d es mayor que %d \n", num2, num1);
    }
    else {
        printf("Los numeros son iguales \n");
    }
    return 0;
}
