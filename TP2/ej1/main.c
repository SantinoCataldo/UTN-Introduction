#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
  Pila dada, aux1, aux2;

  inicpila(&dada);
  inicpila(&aux1);
  inicpila(&aux2);

  printf("Ingrese los 5 elementos de DADA: \n");
  for(int i = 0; i < 5; i++){
    leer(&dada);
  }
  for(int i = 0; i < 3; i++){
    if(!pilavacia(&dada)){
        apilar(&aux1, desapilar(&dada));
    }
  }

  while(!pilavacia(&dada)){
    apilar(&aux2, desapilar(&dada));
  }

  mostrar (&aux1);
  mostrar (&aux2);

  return 0;
}
