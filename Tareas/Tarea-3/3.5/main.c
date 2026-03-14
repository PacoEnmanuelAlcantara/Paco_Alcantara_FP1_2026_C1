#include <stdio.h>
#include <stdlib.h>

int main()
{
    float totalPagos = 0;
    float pago = 0;
    printf("Ingrese el primer pago: ");
    scanf("%f", &pago);

    do{
       totalPagos += pago;

        printf("\nIngrese el siguiente pago: ");
        scanf("%f", &pago);
    } while(pago);

    printf("El total de los pagos es: %.2f", totalPagos);
    return 0;
}
