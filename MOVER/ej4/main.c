#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Desarrollar una funci�n que muestre la tabla de multiplicar de un n�mero entero recibido por par�metro\n\n");
    printf ("Ingrese un numero:");
    scanf("%d", &num1);
    Tabla(num1);

    return 0;
}

void Tabla (int num){
    int tabla;
    for (int i = 1; i < 11; i++){
        tabla = num * i;
        printf("%d*%d: %d\n",num, i, tabla);
    }
}
