#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(NULL));
    num = Random();
    printf("Desarrollar una funcion que devuelva un valor RANDOM en el rango de 0 a 100");
    printf("Numero random: %d\n", num);
    return 0;
}

int Random () {
    int numRandom = rand()%101;
    return numRandom;
}
