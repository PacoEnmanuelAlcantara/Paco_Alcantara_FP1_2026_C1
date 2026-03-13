#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pago;
    float pagoTotal = 0;

    printf("Ingrese el primer pago: ");
    scanf("%f", &pago);

    //Ingrese 0 si quiere que el programa culmine

    while(pago){
    pagoTotal += pago;

    printf("\nIngrese el siguiente pago: ");
    scanf("%f", &pago);

    }

    printf("\nEl pago total es: %.2f", pagoTotal);
    return 0;
}
