#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    int num1, num2, suma, multiplicacion, resta;

    /// Entrada de datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    /// Logica

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    if (num1 > num2){
        printf("El Num1 es mayor que le Num2 \nLa resta da: %d \n", resta);
    }
    else if (num1 < num2){
        printf("El Num2 es mayor que le Num1 \nLa suma da: %d \n", suma);
    }
    else {
        printf("Los numeros son iguales \nLa multiplicacion da: %d \n", multiplicacion);
    }
    return 0;
}
