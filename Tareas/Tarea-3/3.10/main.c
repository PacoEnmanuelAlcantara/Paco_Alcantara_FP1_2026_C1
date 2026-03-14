#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosEnteros = 0;
    int numeroIngresado = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int totalImpares = 0;

    printf("Ingrese la cantidad de numeros enteros: ");
    scanf("%d", &numerosEnteros);

    if(numerosEnteros > 0){

        for(int i = 1;i<= numerosEnteros;i++){

            printf("Ingrese el numero %d: ", i);
            scanf("%d", &numeroIngresado);

            if(numeroIngresado != 0){
                if(numeroIngresado % 2 == 0){
                    sumaPares += numeroIngresado;
                } else {
                    sumaImpares += numeroIngresado;
                    totalImpares += 1;
                }
            }
        }

        printf("\nla suma de los pares es igual a: %d \nLa suma de los impares es igual a: %d \nLa cantidad de impares es: %d", sumaPares,sumaImpares,totalImpares);

    } else {
        printf("Error");
    }

    return 0;
}
