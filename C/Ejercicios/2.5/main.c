#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int opcion = 0;
    int numero = 0;
    float resultado = 0.0;

    printf("Elige una opcion y un numero: ");
    scanf("%d %d", &opcion, &numero);

    switch(opcion){
        case 1:
            resultado = (resultado/5);
            break;

        case 2:
            resultado = pow(numero,numero);
            break;

        case 3:
        case 4:
            resultado = (numero/2) * 6;
            break;

        default: resultado = 1.0;
            break;
    }
    printf("\nEl resultado es: %.2f", resultado);
    return 0;
}
