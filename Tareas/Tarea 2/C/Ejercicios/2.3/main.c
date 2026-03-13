#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avg = 0.0;

    printf("Ingrese su promedio: ");
    scanf("%f", &avg);

    if(avg >= 6){
        printf("\nAprobado");
    } else {
        printf("\nReprobado");
    }
    return 0;
}
