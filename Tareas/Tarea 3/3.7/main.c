#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    float lanzamiento = 0;
    float totalLanzamientos = 0;

    do{
        printf("Ingrese el numero de lanzamientos: ");
        scanf("%d", &n);

    }while(n < 1 || n > 10);

    for(int i = 1; i <= n;i++){
        printf("\nEscribe el lanzamiento %d: ",i);
        scanf("%f", &lanzamiento);

        totalLanzamientos += lanzamiento;
    }

    totalLanzamientos /= n;

    printf("\nEl promedio es: %.2f", totalLanzamientos);
    return 0;
}
