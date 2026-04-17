#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    printf("Escribe un numero: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("\nNumero Nulo");
    } else {
        if(numero % 2 == 0){
           printf("Par");
        } else {
            printf("Impar");
        }
    }
    return 0;
}
