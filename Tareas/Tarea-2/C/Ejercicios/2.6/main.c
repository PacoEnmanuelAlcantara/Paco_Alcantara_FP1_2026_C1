#include <stdio.h>
#include <stdlib.h>

int main()
{
    int level = 0;
    float salida = 0.0;

    printf("Ingrese el nivel del maestro: ");
    scanf("%d", &level);

    printf("\nIngrese el salario del maestro: ");
    scanf("%f", &salida);

    switch(level){
        case 1:
            salida = salida * 1.0035;
            break;

        case 2:
            salida = salida * 1.0041;
            break;

        case 3:
            salida = salida * 1.0048;
            break;

        case 4:
            salida = salida * 1.0053;
            break;
    }

    printf("\nEl nivel del maestro es: %d \nEl nuevo salario es: %.2f", level,salida);
    return 0;
}
