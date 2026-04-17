#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int inter = 0;
    int contador = 1;
    int i = 1;

    double resultado = 4.0/i;

    while (fabs(3.1415 - resultado) > 0.0005){
        i += 2;

        if(inter == 0){
            resultado -= (4.0/i);
            inter = 1;
        } else {
            resultado += (4.0/i);
            inter = 0;
        }

        contador++;
    }

    printf("\n%d",contador);
    return 0;
}
