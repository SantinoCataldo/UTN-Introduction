#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, negativo;
    printf("Realizar una funci�n que reciba un n�mero positivo entero por par�metro por referencia, y cambie su signo a negativo\n\n");
    printf ("Ingrese un numero:");
    scanf("%d", &num1);
    negativo = Negativo(num1);
    printf("El numero en negativo es: %d", negativo);

    return 0;
}

int Negativo(int num){
    int cuenta = num * (-1);

    return cuenta;
}
