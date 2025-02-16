#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// Declaramos variables
    int totalCamisas, precioCamisas = 35000, total, descuento;

    /// Entrada de datos
    printf("Cada camisa sale $%d \nCuantas camisas quiere comprar? : ", precioCamisas);
    scanf("%d", &totalCamisas);

    /// Logica
    total = totalCamisas * precioCamisas;

    if (totalCamisas >= 3){
        descuento = total - total * 0.20;
        printf("Apicado el descuento del %%20 al comprar 3 camisas, el valor de compra es de: $%d", descuento);
    }
    else {
        descuento = total - total * 0.10;
        printf("Apicado el descuento del %%10 al comprar menos de 3 camisas, el valor de compra es de: $%d", descuento);
    }

    return 0;
}
