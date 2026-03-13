#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    float resultado = 0.0;

    printf("Escriba el valor de los 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    resultado = pow(num1,4) - pow(num2,3) + (4*pow(num3,2));

    if(resultado < 820){
        printf("Los numeros utilizados fueron: \nNumero 1: %d \nNumero 2: %d \nNumero 3: %d", num1,num2,num3);
    }
    return 0;
}
