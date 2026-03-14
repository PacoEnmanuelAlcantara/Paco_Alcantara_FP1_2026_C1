#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char caracter;
    char cadena[50];
    int posicion;

    printf("Ingrese la cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Ingrese la poscicion: ");
    scanf("%d", &posicion);

    if(posicion >= 1 && posicion <= 50){
        caracter = cadena[posicion - 1];

        if(islower(caracter)){
            printf("El caracter esta en minuscula");
        } else {
           printf("El caracter no esta en minuscula");
        }
    } else {
        printf("La posicion ingresada es incorrecta");
    }

    return 0;
}
