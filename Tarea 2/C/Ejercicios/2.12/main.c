#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;

    printf("Escribe 3 numeros: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    if(valor2 != 0){
        if(pow((valor1/valor2), valor3) == pow(valor1,valor3)/pow(valor2,valor3)){
            printf("Se comprueba la igualdad");
        }else {
            printf("No se comprueba la igualdad");
        }

    } else {
        printf("\nEl segundo numero debe ser diferente de 0");
    }
    return 0;
}
