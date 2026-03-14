#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int factorial = 1;

    printf("Ingrese un numero mayor y diferente que 0: ");
    scanf("%d", &numero);

    if (numero >= 0){
        for(int i=1;i<= numero;i++){
            factorial *= i;
        }
    } else {
        printf("\nerror de dato");
        return 0;
    }

    printf("El factorial de %d es %d",numero,factorial);
    return 0;
}
