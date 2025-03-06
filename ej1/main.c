#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pila.h"

int main()
{
    char control = 's';
    int opcion = 0;
    int cantidad = 0;
    srand(time(NULL)); /// para que funcione bien el rand

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

        printf("Ingrese opcion numerica\n");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");

        switch(opcion){
            case 1:
                printf("Sumar los elementos de una pila (usar variables enteras)\n\n");
                Pila pilaA, aux1;
                int suma = 0;

                inicpila(&pilaA);
                inicpila(&aux1);

                for (int i = 0; i <6; i++){
                    apilar(&pilaA, i + 1);
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
                int suma2 = 0;

                inicpila(&pilaB);
                inicpila(&aux2);

                for (int i = 0; i <6; i++){
                    apilar(&pilaB, i + 1);
                }

                printf("La pila contiene: ");
                mostrar(&pilaB);

                while (!pilavacia(&pilaB)){
                    suma2++;
                    apilar(&aux2, desapilar(&pilaB));
                }

                while (!pilavacia(&aux2)){
                    apilar(&pilaB, desapilar(&aux2));
                }
                printf("En la pila hay %i elementos\n\n", suma2);
                system("pause");
                system("cls");
                break;

            case 3:
                printf("Calcular el promedio de los valores de una pila (usar variables)\n\n");

                Pila pila3, aux3;
                inicpila(&pila3);
                inicpila(&aux3);
                cantidad = rand()%10 + 1;

                for(int i = 0; i < cantidad; i++){
                    apilar(&pila3, rand()%10 + 1);
                }

                int contador3 = 0, suma3 = 0;

                while(!pilavacia(&pila3)){
                    suma3 += tope(&pila3);
                    contador3++;
                    apilar(&aux3, desapilar(&pila3));
                }

                float promedio = (float)suma3 / (float)contador3;

                while(!pilavacia(&aux3)){
                    apilar(&pila3, desapilar(&aux3));
                }

                printf("Pila 3:\n");
                mostrar(&pila3);
                printf("Promedio de elementos de la pila: %.2f\n\n", promedio);

                system("pause");
                system("cls");
                break;

            case 4:
                printf("Determinar si un elemento buscado esta dentro de una pila. Al encontrarlo, finalizar la busqueda.\n\n");

                Pila pila4, aux4;
                inicpila(&pila4);
                inicpila(&aux4);
                cantidad = rand()%10 + 1;

                for(int i = 0; i < cantidad; i++){
                    apilar(&pila4, rand()%10 + 1);
                }

                printf("Pila 4:\n");
                mostrar(&pila4);

                int buscado4 = 0;
                printf("Ingrese el elemento a buscar: ");
                scanf("%d", &buscado4);

                /// RESOLUCION SIN USO DE FLAG:
                while( (!pilavacia(&pila4)) && (tope(&pila4)!= buscado4) )
                {
                    apilar(&aux4, desapilar(&pila4));
                }

                if (!pilavacia(&pila4)) //si no esta vacia, es porque corto al encontrar el N°
                {
                    printf("\nEl Nro buscado SI se encuentra en la pila\n");
                }
                else     //si esta vacia, es porque nunca enconrto el N° y se corto al vaciarse
                {
                   printf("\nEl Nro buscado NO se encuentra en la pila\n");
                }

                while (!pilavacia(&aux4))
                {
                    apilar(&pila4, desapilar(&aux4));
                }

                /// RESOLUCION CON USO DE FLAG:

                int flag4 = 0;

                while( !pilavacia(&pila4) && flag4 == 0 ){
                    if(tope(&pila4) == buscado4){
                        flag4 = 1;
                    }
                    apilar(&aux4, desapilar(&pila4));
                }

                while(!pilavacia(&aux4)){
                    apilar(&pila4, desapilar(&aux4));
                }

                if(flag4 == 1){
                    printf("\nEl elemento buscado esta dentro de la pila\n\n");
                }
                else{
                    printf("\nEl elemento buscado NO esta dentro de la pila\n\n");
                }

                system("pause");
                system("cls");
                break;

            case 5:
                printf("Eliminar un elemento de una pila. Al eliminarlo, finalizar el recorrido y dejar el resto en el mismo orden.\n\n");

                Pila pila5, aux5;
                inicpila(&pila5);
                inicpila(&aux5);
                cantidad = rand()%10 + 1;

                for(int i = 0; i < cantidad; i++){
                    apilar(&pila5, rand()%10 + 1);
                }

                printf("Pila 5:\n");
                mostrar(&pila5);

                int buscado5 = 0;
                printf("Ingrese el elemento a eliminar: ");
                scanf("%d", &buscado5);

                int eliminado = -1;

                /// version sin uso de flag: (tambien podria hacerse con un flag)
                while(!pilavacia(&pila5) && tope(&pila5) != buscado5){
                    apilar(&aux5, desapilar(&pila5));
                }

                if(!pilavacia(&pila5)){  /// IMPORTANTE!! porque puede ser que el buscado no estuviera en la pila
                    eliminado = desapilar(&pila5);
                }

                while(!pilavacia(&aux5)){
                    apilar(&pila5, desapilar(&aux5));
                }

                if(eliminado != -1){
                    printf("\nPila 5 sin el elemento eliminado:\n");
                    mostrar(&pila5);
                }
                else{
                    printf("\nNo se encontro el elemento a eliminar en la pila\n\n");
                }

                /// SI EN LUGAR DE LA CONSIGNA ME HUBIERAN PEDIDO ELIMINAR TODOS LOS ELEMENTOS QUE COINCIDIERAN CON EL BUSCADO AHI SI QUE TENGO QUE RECORRER TODA LA PILA Y NO CORTAR AL ENCONTRAR EL DATO:
                /// porque  puede haber, por ejemplo, varios Nro 8 a eliminar en la Pila
                /*
                Pila dada, aux, descarte;
                int numAeliminar;
                inicpila(&dada); inicpila(&descarte); inicpila(&aux);
                apilar(&dada, 1); apilar(&dada, 7); apilar(&dada, 5); apilar(&dada, 3);

                printf("Ingrese un elemento a eliminar en la pila dada: ");
                scanf("%d", &numAeliminar);

                while ( !pilavacia(&dada) ){
                    if (tope(&dada) == numAeliminar) {
                        apilar(&descarte, desapilar(&dada));
                    }
                    else {
                        apilar(&aux, desapilar(&dada));
                    }
                }

                while (!pilavacia(&aux)){
                    apilar(&dada, desapilar(&aux));
                }

                printf("\nPila dada");
                mostrar(&dada);
                printf("\n Elemento eliminado");
                mostrar(&descarte);
                */

                system("pause");
                system("cls");
                break;

            case 6:
                printf("Verificar si una pila DADA es capicua.\n\n");

                Pila dada6, invertida6, aux6;
                inicpila(&dada6);
                inicpila(&invertida6);
                inicpila(&aux6);
                cantidad = rand()%3 + 2;

                for(int i = 0; i < cantidad; i++){
                    apilar(&dada6, rand()%4 + 1);
                }

                while(!pilavacia(&dada6)){   /// GENERO UNA COPIA DE DADA PERO INVERTIDA
                    apilar(&invertida6, tope(&dada6));
                    apilar(&aux6, desapilar(&dada6));
                }

                while(!pilavacia(&aux6)){  ///vuelvo a poner todo en DADA
                    apilar(&dada6, desapilar(&aux6));
                }

                printf("Pila DADA:\n");
                mostrar(&dada6);

                while(!pilavacia(&dada6) && !pilavacia(&invertida6) && tope(&dada6) == tope(&invertida6)){
                    apilar(&aux6, desapilar(&dada6));
                    desapilar(&invertida6);
                }

                if(pilavacia(&dada6)){
                    printf("La pila DADA es capicua\n\n");
                }
                else{
                    printf("La pila DADA NO es capicua\n\n");
                }

                while(!pilavacia(&aux6)){  //vuelvo a poner todo de vuelta en DADA
                    apilar(&dada6, desapilar(&aux6));
                }

                system("pause");
                system("cls");
                break;

            case 7:
                printf("Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre si mismo), realizar un programa que calcule en la pila C la operacion de union.\n\n");

                Pila a, b, c, aux7, descarte7;
                inicpila(&a);
                inicpila(&b);
                inicpila(&c);
                inicpila(&aux7);
                inicpila(&descarte7);

                apilar(&a, 1);
                apilar(&a, 2);
                apilar(&a, 3);
                apilar(&a, 4);
                apilar(&a, 5);

                apilar(&b, 1);
                apilar(&b, 3);
                apilar(&b, 5);
                apilar(&b, 7);
                apilar(&b, 9);

                printf("Pila A:\n");
                mostrar(&a);
                printf("Pila B\n");
                mostrar(&b);

                while(!pilavacia(&a)){
                    while(!pilavacia(&b)){  /// VOY SACANDO DE B TODO LO QUE ESTE REPETIDO CON EL TOPE DE
                        if (tope(&a) == tope(&b)){   /// voy comparando siempre toda la pila B con el tope de A
                            apilar(&descarte7, desapilar(&b));
                        }
                        else{
                            apilar(&aux7, desapilar(&b));
                        }
                    }

                    apilar(&c, desapilar(&a));   /// saco el tope de A para volver a empezar y comparar cada tope de A con TODA la pila B
                                                ///lo que va quedando en C no es repetido
                    while(!pilavacia(&aux7)){
                        apilar(&b, desapilar(&aux7));
                    }
                }

                while(!pilavacia(&b)){
                    apilar(&c, desapilar(&b)); ///paso toda la Pila B a la C
                }

                printf("Pila C:\n");
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
                apilar(&ordenada1, 7);
                apilar(&ordenada1, 9);

                apilar(&ordenada2, 2);
                apilar(&ordenada2, 4);
                apilar(&ordenada2, 6);
                apilar(&ordenada2, 8);
                apilar(&ordenada2, 10);

                printf("Pila ORDENADA 1:\n");
                mostrar(&ordenada1);
                printf("Pila ORDENADA 2:\n");
                mostrar(&ordenada2);

                while(!pilavacia(&ordenada1) && !pilavacia(&ordenada2)){
                    if (tope(&ordenada1) > tope(&ordenada2)){
                        apilar(&aux8, desapilar(&ordenada1));
                    }
                    else{
                        apilar(&aux8, desapilar(&ordenada2));
                    }
                }

                // ahora evaluo si quedo algo en alguna de las dos pilas
                if(!pilavacia(&ordenada1)){
                    while(!pilavacia(&ordenada1)){
                        apilar(&aux8, desapilar(&ordenada1));
                    }
                }
                else{
                    while(!pilavacia(&ordenada2)){
                        apilar(&aux8, desapilar(&ordenada2));
                    }
                }

                while(!pilavacia(&aux8)){
                    apilar(&ordenadaFinal, desapilar(&aux8));
                }

                printf("Pila ORDENADA FINAL:\n");
                mostrar(&ordenadaFinal);

                system("pause");
                system("cls");
                break;

            case 9:
                printf("Suponer un juego de cartas en el que en cada mano se reparten dos cartas por jugador. Un jugador gana la mano cuando la suma de sus cartas es mayor que las del contrario y al hacerlo coloca todas las cartas (las de el y las de su rival) en su pila de puntos. En caso de empate (y para simplificar) siempre gana el jugador1. Simular la ejecucion del juego de tal manera que dada una pila MAZO (con un numero de elementos multiplo de cuatro) distribuya las cartas en las pilas PUNTOSJUG1 y PUNTOSJUG2 como si estos hubieran jugado. Utilizar las pilas auxiliares que crea conveniente.\n\n");
                Pila mazo, jugador1, jugador2, puntosjug1, puntosjug2, aux;
                inicpila(&mazo);
                inicpila(&jugador1);
                inicpila(&jugador2);
                inicpila(&puntosjug1);
                inicpila(&puntosjug2);
                inicpila(&aux);

                for(int i = 0; i < 20; i++){
                    apilar(&mazo, rand()%12 + 1);
                }

                printf("Pila MAZO:\n");
                mostrar(&mazo);
                printf("Iniciando partida...\n\n");
                system("pause");
                system("cls");

                while(!pilavacia(&mazo)) {
                    apilar(&jugador1, desapilar(&mazo)); /// cada mano reparto 2 y 2 cartas
                    apilar(&jugador2, desapilar(&mazo));
                    apilar(&jugador1, desapilar(&mazo));
                    apilar(&jugador2, desapilar(&mazo));

                    printf("Pila CARTAS JUGADOR 1:\n");
                    mostrar(&jugador1);
                    printf("Pila CARTAS JUGADOR 2:\n");
                    mostrar(&jugador2);

                    int puntosJugador1 = 0, puntosJugador2 = 0; /// se resetea a 0 en cada vuelta (cada mano)

                    while(!pilavacia(&jugador1) && !pilavacia(&jugador2)){ /// cuento puntos de cada jugador
                        puntosJugador1 += tope(&jugador1);
                        puntosJugador2 += tope(&jugador2);
                        apilar(&aux, desapilar(&jugador1));
                        apilar(&aux, desapilar(&jugador2));
                    }

                    printf("Puntos JUGADOR 1: %d\n", puntosJugador1);
                    printf("Puntos JUGADOR 2: %d\n\n", puntosJugador2);
                    if (puntosJugador1 >= puntosJugador2){
                        while(!pilavacia(&aux)){
                            apilar(&puntosjug1, desapilar(&aux));
                        }
                        printf("El JUGADOR 1 gana la mano\n\n");
                        printf("Pila PUNTOS JUGADOR 1\n");
                        mostrar(&puntosjug1);
                    }
                    else {
                        while(!pilavacia(&aux)){
                            apilar(&puntosjug2, desapilar(&aux));
                        }
                        printf("El JUGADOR 2 gana la mano\n\n");
                        printf("Pila PUNTOS JUGADOR 2\n");
                        mostrar(&puntosjug2);
                    }
                    system("pause");
                    system("cls");
                }

                printf("FIN DEL JUEGO\n\n");
                printf("Pila PUNTOS JUGADOR 1\n");
                mostrar(&puntosjug1);
                printf("Pila PUNTOS JUGADOR 2\n");
                mostrar(&puntosjug2);

                system("pause");
                system("cls");
                break;

            default:
                printf("Opcion incorrecta\n");
                system("pause");
                system("cls");
        }

        printf("Desea probar otro ejercicio? (s/n) ");
        fflush(stdin);
        scanf("%c", &control);
        system("cls");
    }

    printf("Nos vemos en Programación 1!\n");
    return 0;
}
