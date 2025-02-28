#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
  Pila origen, destino;

  inicpila(&origen);
  inicpila(&destino);

  for(int i = 0; i < 3; i++){
    leer (&origen);
  }

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
