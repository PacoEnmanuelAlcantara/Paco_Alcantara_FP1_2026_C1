#include <stdio.h>
#include <stdlib.h>
/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
➥incrementa 11% el mismo si éste es inferior a $1,500.
PRE y NPR: variable de tipo real. */

int main()
{
    float price = 0.0;
    float newPrice = 0.0;

    printf("Ingrese el precio del articulo: ");
    scanf("%f", &price);

    if(price < 1500){
        newPrice = (price * 0.11) + price;
        printf("\nEl precio es: %.2f", newPrice);
    } else{
        printf("\nEl precio es: %.2f", price);
    }
    return 0;
}
