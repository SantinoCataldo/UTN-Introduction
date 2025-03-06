#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pila.h"

int main()
{
    char control = 's';
    int opcion = 0;
    int cantidad = 0;
    srand(time(NULL));

    while (control == 's'){
        printf("TP 2 - PILAS AVANZADO\n\n");
        printf("1  -  Ejercicio 1\n");
        printf("2  -  Ejercicio 2\n");
        printf("3  -  Ejercicio 3\n");
        printf("4  -  Ejercicio 4\n");
        printf("5  -  Ejercicio 5\n");
        printf("6  -  Ejercicio 6\n");
        printf("7  -  Ejercicio 7\n");
        printf("8  -  Ejercicio 8\n");
        printf("9  -  Ejercicio 9\n\n");

        printf("Elija la opcion: ");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");

        switch(opcion){
            case 1:
                printf("Sumar los elementos de una pila (usar variables enteras)\n\n");
                Pila pilaA, aux1;
                int suma = 0;
                cantidad = rand()%10 + 1;

                inicpila(&pilaA);
                inicpila(&aux1);

                for (int i = 0; i <cantidad; i++){
                    apilar(&pilaA, rand()%30 + 1);
                }

                printf("La pila contiene: ");
                mostrar(&pilaA);

                while (!pilavacia(&pilaA)){
                    suma += tope(&pilaA);
                    apilar(&aux1, desapilar(&pilaA));
                }

                while (!pilavacia(&aux1)){
                    apilar(&pilaA, desapilar(&aux1));
                }

                printf("La suma es %i\n\n", suma);

                system("pause");
                system("cls");
                break;

            case 2:
                printf("Contar los elementos de una pila (usar variables enteras)\n\n");
                Pila pilaB, aux2;
                int contador2;
                cantidad = rand()%10 + 1;

                inicpila(&pilaB);
                inicpila(&aux2);

                for (int i = 0; i <cantidad; i++){
                    apilar(&pilaB, i + 1);
                }

                printf("La pila contiene: ");
                mostrar(&pilaB);

                while (!pilavacia(&pilaB)){
                    contador2++;
                    apilar(&aux2, desapilar(&pilaB));
                }

                while (!pilavacia(&aux2)){
                    apilar(&pilaB, desapilar(&aux2));
                }
                printf("En la pila hay %i elementos\n\n", contador2);
                system("pause");
                system("cls");
                break;

            case 3:
                printf("Calcular el promedio de los valores de una pila (usar variables)\n\n");

                Pila pilaC, aux3;
                inicpila(&pilaC);
                inicpila(&aux3);
                cantidad = rand()%10 + 1;
                int contador3 = 0, suma3 = 0;

                for(int i = 0; i < cantidad; i++){
                    apilar(&pilaC, rand()%10 + 1);
                }

                printf("La pila contiene: ");
                mostrar(&pilaC);

                while(!pilavacia(&pilaC)){
                    suma3 += tope(&pilaC);
                    contador3++;
                    apilar(&aux3, desapilar(&pilaC));
                }

                float promedio = (float)suma3 / (float)contador3;

                while(!pilavacia(&aux3)){
                    apilar(&pilaC, desapilar(&aux3));
                }

                printf("Promedio de elementos de la pila: %.2f\n\n", promedio);
                system("pause");
                system("cls");
                break;

            case 4:
                printf("Determinar si un elemento buscado esta dentro de una pila. Al encontrarlo, finalizar la busqueda.\n\n");

                Pila pilaD, aux4;
                int num4;
                inicpila(&pilaD);
                inicpila(&aux4);
                cantidad = rand()%10 + 1;

                for(int i = 0; i < cantidad; i++){
                    apilar(&pilaD, rand()%10 + 1);
                }

                printf("La pila contiene: ");
                mostrar(&pilaD);


                printf("Ingrese el elemento a buscar: ");
                scanf("%d", &num4);

                while( (!pilavacia(&pilaD)) && (tope(&pilaD)!= num4) )
                {
                    apilar(&aux4, desapilar(&pilaD));
                }

                if (!pilavacia(&pilaD)){
                    printf("\nEl numero se encuentra en la pila\n");
                }
                else{
                   printf("\nEl Numero no se encuentra en la pila\n");
                }

                while (!pilavacia(&aux4))
                {
                    apilar(&pilaD, desapilar(&aux4));
                }

                system("pause");
                system("cls");
                break;

            case 5:
                printf("Eliminar un elemento de una pila. Al eliminarlo, finalizar el recorrido y dejar el resto en el mismo orden.\n\n");

                Pila pilaE, aux5;
                inicpila(&pilaE);
                inicpila(&aux5);
                int num5;
                int eliminar5 = 0;
                cantidad = rand()%10 + 1;

                for(int i = 0; i < cantidad; i++){
                    apilar(&pilaE, rand()%10 + 1);
                }

                printf("La pila contiene: ");
                mostrar(&pilaE);

                printf("Ingrese el elemento a eliminar: ");
                scanf("%d", &num5);


                while(!pilavacia(&pilaE) && tope(&pilaE) != num5){
                    apilar(&aux5, desapilar(&pilaE));
                }

                if(!pilavacia(&pilaE)){
                    eliminar5 = desapilar(&pilaE);
                }

                while(!pilavacia(&aux5)){
                    apilar(&pilaE, desapilar(&aux5));
                }

                if(eliminar5 != 0){
                    printf("\nSe encontro el elemento, la pila quedo:\n");
                    mostrar(&pilaE);
                }
                else{
                    printf("\nNo se encontro el elemento a eliminar en la pila\n\n");
                }

                system("pause");
                system("cls");
                break;

            case 6:
                printf("Verificar si una pila DADA es capicua.\n\n");

                Pila dada6, invertida6, aux6;
                inicpila(&dada6);
                inicpila(&invertida6);
                inicpila(&aux6);
                cantidad = rand()%4 + 2;

                for(int i = 0; i < cantidad; i++){
                    apilar(&dada6, rand()%2 + 1);
                }

                while(!pilavacia(&dada6)){
                    apilar(&invertida6, tope(&dada6));
                    apilar(&aux6, desapilar(&dada6));
                }

                while(!pilavacia(&aux6)){
                    apilar(&dada6, desapilar(&aux6));
                }

                printf("DADA contiene:");
                mostrar(&dada6);

                while(!pilavacia(&dada6) && !pilavacia(&invertida6) && tope(&dada6) == tope(&invertida6)){
                    apilar(&aux6, desapilar(&dada6));
                    desapilar(&invertida6);
                }

                if(pilavacia(&dada6)){
                    printf("DADA es capicua\n\n");
                }
                else{
                    printf("DADA NO es capicua\n\n");
                }

                system("pause");
                system("cls");
                break;

            case 7:
                printf("Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre si mismo), realizar un programa que calcule en la pila C la operacion de union.\n\n");

                Pila a, b, c, aux7, temporal;
                int repetido = 0;
                inicpila(&a);
                inicpila(&b);
                inicpila(&c);
                inicpila(&aux7);
                inicpila(&temporal);

                apilar(&a, 1);
                apilar(&a, 2);
                apilar(&a, 3);

                apilar(&b, 2);
                apilar(&b, 3);
                apilar(&b, 4);

                printf("Pila A:");
                mostrar(&a);
                printf("Pila B:");
                mostrar(&b);

                while (!pilavacia(&a)) {
                    apilar(&c, desapilar(&a));
                }

               while (!pilavacia(&b)) {
                    apilar(&aux7, desapilar(&b));

                    while (!pilavacia(&c)) {
                        apilar(&temporal, desapilar(&c));
                        if (tope(&temporal) == tope(&aux7)) {
                            repetido = 1;
                        }
                    }

                    while (!pilavacia(&temporal)) {
                        apilar(&c, desapilar(&temporal));
                    }

                    if (!repetido) {
                        apilar(&c, tope(&aux7));
                    }

                    desapilar(&aux7);
                }

                printf("\nElementos en la pila C:");
                mostrar(&c);

                system("pause");
                system("cls");
                break;

            case 8:
                printf("Intercalar dos pilas ordenadas en forma creciente (ORDENADA1 y ORDENADA2) dejando el resultado en una pila tambien ordenada en forma creciente (ORDENADAFINAL).\n\n");

                Pila ordenada1, ordenada2, ordenadaFinal, aux8;

                inicpila(&ordenada1);
                inicpila(&ordenada2);
                inicpila(&ordenadaFinal);
                inicpila(&aux8);

                apilar(&ordenada1, 1);
                apilar(&ordenada1, 3);
                apilar(&ordenada1, 5);

                apilar(&ordenada2, 4);
                apilar(&ordenada2, 6);
                apilar(&ordenada2, 7);

                printf("ORDENADA1:\n");
                mostrar(&ordenada1);
                printf("ORDENADA2:\n");
                mostrar(&ordenada2);

                while (!pilavacia(&ordenada1) || !pilavacia(&ordenada2)) {
                    if (pilavacia(&ordenada1)) {
                        apilar(&aux8, desapilar(&ordenada2));
                    } else if (pilavacia(&ordenada2)) {
                        apilar(&aux8, desapilar(&ordenada1));
                    } else if (tope(&ordenada1) > tope(&ordenada2)) {
                        apilar(&aux8, desapilar(&ordenada1));
                    } else {
                        apilar(&aux8, desapilar(&ordenada2));
                    }
                }

                while (!pilavacia(&aux8)) {
                    apilar(&ordenadaFinal, desapilar(&aux8));
                }

                printf("\nLas pilas ordenas quedan asi: ");
                mostrar(&ordenadaFinal);

                system("pause");
                system("cls");
                break;

            case 9:
                printf("Suponer un juego de cartas en el que en cada mano se reparten dos cartas por jugador. Un jugador gana la mano cuando la suma de sus cartas es mayor que las del contrario y al hacerlo coloca todas las cartas (las de el y las de su rival) en su pila de puntos. En caso de empate (y para simplificar) siempre gana el jugador1. Simular la ejecucion del juego de tal manera que dada una pila MAZO (con un numero de elementos multiplo de cuatro) distribuya las cartas en las pilas PUNTOSJUG1 y PUNTOSJUG2 como si estos hubieran jugado. Utilizar las pilas auxiliares que crea conveniente.\n\n");
                Pila mazo, puntosJUG1, puntosJUG2, manoAux1, manoAux2;
                int carta1, carta2, i = 1;
                inicpila(&mazo);
                inicpila(&puntosJUG1);
                inicpila(&puntosJUG2);
                inicpila(&manoAux1);
                inicpila(&manoAux2);

                for(int i = 0; i < 8; i++){
                    apilar(&mazo, rand()%12 + 1);
                }

                printf("MAZO inicial:\n");
                mostrar(&mazo);

                while (!pilavacia(&mazo)) {
                    printf("Mano: %d\n", i);
                    carta1 = desapilar(&mazo);
                    carta2 = desapilar(&mazo);
                    printf("Cartas del jugador 1: %d, %d \n", carta1,carta2);
                    apilar(&manoAux1, carta1);
                    apilar(&manoAux1, carta2);

                    carta1 = desapilar(&mazo);
                    carta2 = desapilar(&mazo);
                    printf("Cartas del jugador 2: %d, %d \n", carta1,carta2);
                    apilar(&manoAux2, carta1);
                    apilar(&manoAux2, carta2);

                    int sumaJUG1 = desapilar(&manoAux1) + desapilar(&manoAux1);
                    int sumaJUG2 = desapilar(&manoAux2) + desapilar(&manoAux2);

                    if (sumaJUG1 < sumaJUG2) {
                        printf("\nLa mano %d la gano jugador 2\n\n", i);
                        apilar(&puntosJUG2, carta1);
                        apilar(&puntosJUG2, carta2);
                    } else {
                        printf("\nLa mano %d la gano jugador 1\n\n", i);
                        apilar(&puntosJUG1, carta1);
                        apilar(&puntosJUG1, carta2);
                    }
                    i++;
                }

                system("pause");
                system("cls");

                printf("\nCartas ganadas por Jugador 1:");
                mostrar(&puntosJUG1);

                printf("\nCartas ganadas por Jugador 2:");
                mostrar(&puntosJUG2);

                system("pause");
                system("cls");
                break;

            default:
                printf("Se equivoco\n");
                system("pause");
                system("cls");
        }

        printf("Queres ver otro ejecicio? (s/n) ");
        fflush(stdin);
        scanf("%c", &control);
        system("cls");
    }

    return 0;
}
