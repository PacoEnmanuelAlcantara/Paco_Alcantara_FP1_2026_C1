#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num = 0;
    long sucesion = 0;
    long cuadrado = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    while(num){
    cuadrado = pow(num,2);
    printf("\n%d al cuadrado es igual a %ld\n", num, cuadrado);

    sucesion += cuadrado;

    printf("Ingrese un numero: ");
    scanf("%d", &num);
    }

    printf("La suma de los cuadrados es: %ld", sucesion);
    return 0;
}
