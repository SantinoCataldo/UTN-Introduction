#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Declamos varaibles
    int i, num[10], positivo[10], count = 0;

    ///logica
    for (i = 0; i < 10; i++){
        printf ("Ingrese el n%d: ", i + 1);
        scanf ("%d", &num[i]);

        if (num[i] >= 1){
            positivo[count++] = num[i];
        }
    }

    ///Imprimimos valores

    printf("Los numeros positivos son: \n");

    for (i = 0; i < count; i++) {
        printf("%d, ", positivo[i]);
    }
    return 0;
}
