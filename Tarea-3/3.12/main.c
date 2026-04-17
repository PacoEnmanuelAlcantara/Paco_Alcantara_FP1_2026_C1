#include <stdio.h>
#include <stdlib.h>

int main()
{
    long numero = 0;

    printf("Ingrese un numero: ");
    scanf("%ld", &numero);

    if(numero > 0){
        printf("\n%ld",numero);

        while(numero != 1){
            if(numero % 2 == 0){
                numero /= 2;
                printf("\n%ld",numero);
            } else {
                numero = (numero * 3) + 1;
                printf("\n%ld",numero);
            }
        }
    } else {
        printf("Numero debe ser positivo");
    }
    return 0;
}
