#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {
  Pila origen, destino;

  inicpila(&origen);
  inicpila(&destino);

  leer (&origen);
  leer (&origen);
  leer (&origen);

  mostrar(&origen);
  apilar (&destino, desapilar(&origen));
  apilar (&destino, desapilar(&origen));
  apilar (&destino, desapilar(&origen));
  mostrar (&destino);
  return 0;
}
