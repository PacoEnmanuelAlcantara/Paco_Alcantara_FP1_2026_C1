#include <stdio.h>
#include <stdlib.h>

int calcularLongitud(char *cadena);
int main()
{
    int longitud;
    char cadena[50];

    printf("Ingrese la cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    longitud = calcularLongitud(cadena);

    printf("La longitud de la cadena %s es %d",cadena,  longitud);
    return 0;
}

int calcularLongitud(char *cadena){
    int contador = 0;

    while(cadena[contador] != '\0'){
        contador++;
    }

    return contador;
}
