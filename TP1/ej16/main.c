#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///declaramos variables
    int i, num, producto;

    ///logica
    printf("Ingresar un numero para mostrar la tabla de multiplicar: ");
    scanf("%d", &num);

    ///Imprimimos valores
    printf("La tabla de multiplicar de %d\n", num);
    for(i = 1; i <= 10; i++) {
        producto = num * i;

        printf("%d * %d = %d\n", num, i, producto);
    }

    return 0;
}
