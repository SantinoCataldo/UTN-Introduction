#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///declamos varaibles
    int i, num[15], positivo[15], count = 0;

    ///logica
    for (i = 0; i < 15; i++){
        printf ("Ingrese el n%d: ", i + 1);
        scanf ("%d", &num[i]);

        if (num[i] >= 1){
            positivo[count++] = num[i];
        }
        else if (num[i] <= 1){
            positivo[count++] = num[i] * -1;
        }
    }

    ///Imprimimos valores

    printf("Los numeros positivos son: \n");

    for (i = 0; i < count; i++) {
        printf("%d, ", positivo[i]);
    }
    return 0;
}
