#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Dise�e una funci�n que reciba un n�mero entero N y realice la suma de los n�meros enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main\n\n");
    printf ("Ingrese un numero:");
    scanf("%d", &num1);
    Suma(num1);

    return 0;
}

void Suma(int num){
    int suma;
    for (int i = 0; i < num; i++){
        suma += i;
    }

    printf("La suma de los numeros da: %d", suma);
}
