#include <stdio.h>
#include <stdlib.h>

int main()
{
    long suma = 0;
    int cambio = 1;
    int i = 2;

    while (i <= 2500){
        suma += i;
        printf("\n%d", i);

        if(cambio > 0){
            i += 5;
            cambio = 0;
        }else {
            i += 3;
            cambio = 1;
        }
    }

    printf("\nLa suma total es igual a: %ld", suma);

    return 0;
}
