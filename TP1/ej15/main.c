#include <stdio.h>
#include <stdlib.h>

///Libreria para hacer numeros random
#include <time.h>

int main()
{
    ///Declaramos variables
    int i;
    float minNota = 10, suma = 0, promedio = 0;
    srand(time(NULL));

    ///Logica
    for(int i = 0; i < 40; i++) {

    ///Numeros random para no tener que ingresar manualmente
    int num = rand() % 10 + 1;
    printf("Nota %d: %d\n",i + 1, num);

    suma += num;

    if (num < minNota){
        minNota = num;
    }
  }

    promedio = suma / 40;

    ///Imprimimos valores
    printf("El promedio general del curso es de: %.2f \nLa nota mas baja es: %.2f\n", promedio, minNota);
    return 0;
}
