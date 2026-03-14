#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nomina = 0;
    float avg = 0;
    float salario = 0;
    int i = 0;

    printf("Ingrese el primer salario: ");
    scanf("%f", &salario);

    do{
        nomina += salario;
        i++;

        printf("\nIngrese el siguiente salario: ");
        scanf("%f", &salario);
    } while(salario);

    avg = nomina/i;

    printf("\nLa nomina total es: %.2f", nomina);
    printf("\nEl promedio total es: %.2f", avg);
    return 0;
}
