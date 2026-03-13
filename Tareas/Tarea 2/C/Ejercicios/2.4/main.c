#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price = 0.0;
    float newPrice = 0.0;

    printf("Ingrese el precio: ");
    scanf("%f", &price);

    if(price < 1500){
        newPrice = price + (price * 0.11);
        printf("\nEl precio es: %.2f", newPrice);
    } else {
        newPrice = price + (price * 0.08);
        printf("\nEl precio es: %.2f", newPrice);
    }
    return 0;
}
