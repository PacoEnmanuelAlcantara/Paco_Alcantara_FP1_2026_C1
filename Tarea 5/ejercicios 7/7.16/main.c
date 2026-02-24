#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[50], cadenaBuscar[50], *posicion;
    int contador = 0;

    printf("\nIngresa la primera cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';
    cadenaBuscar[strcspn(cadenaBuscar, "\n")] = '\0';

    printf("\nIngresa la cadena de caracteres a buscar: ");
    fgets(cadenaBuscar, sizeof(cadenaBuscar), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';
    cadenaBuscar[strcspn(cadenaBuscar, "\n")] = '\0';

    posicion = strstr(cadena, cadenaBuscar);

    while(posicion != NULL){
        contador++;
        posicion = strstr(posicion + 1, cadenaBuscar);
    }

    printf("\nEl numero de veces que aparece la segunda cadena es: %d", contador);

    return 0;
}
