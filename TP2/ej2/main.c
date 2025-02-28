#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
  Pila origen, destino;

  inicpila(&origen);
  inicpila(&destino);

  printf("Ingrese elementos para origen (terminar con 0): \n");
  do {
      leer(&origen);
  } while (tope(&origen) != 0);

  mostrar(&origen);

  for(int i = 0; i < 3; i++){
    leer (&origen);
    if(!pilavacia(&destino)){
        apilar(&destino, desapilar(&origen));
    }
  }

  mostrar (&destino);
  return 0;
}
