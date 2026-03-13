#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    int suma = 0;
    int n;

    printf("Cuantos numeros quieres sumar: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;){
        printf("\nIngrese el numero %d: ", i);
        scanf("%d", &numero);
    if(numero > 0)
    {
    suma = suma + numero;
    i++;
    }
    }

    printf("\nLa suma total es: %d", suma);
    return 0;
}
