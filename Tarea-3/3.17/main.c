#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    int limite = 0;
    int divisores;
    int suma = 0;

    printf("Ingrese el numero limite: ");
    scanf("%d", &limite);

    for(int i = 1; i <= limite; i++){
        suma = 0;

        for(divisores = 1;divisores <= (i/2);divisores++){
            if(i % divisores == 0 ){
                suma += divisores;
            }
        }

        if(suma == i){
            printf("\n%d, es un numero perfecto\n",i);
            contador += 1;
        }

    }

    printf("\nEntre 1 y %d hay %d numeros perfectos\n", limite, contador);
    return 0;
}
