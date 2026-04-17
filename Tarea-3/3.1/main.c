#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float nomina = 0.0;
    float salario = 0.0;

    for(i = 1;i <= 15;i++){
        printf("Ingrese el salario del maestro %d: ",i);
        scanf("%f",&salario);
        nomina = nomina + salario;
    }

    printf("\nLa nomina final es: %.2f", nomina);
    return 0;
}
