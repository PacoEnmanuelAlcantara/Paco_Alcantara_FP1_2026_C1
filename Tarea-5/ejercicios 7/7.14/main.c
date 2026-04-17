#include <stdio.h>
#include <stdlib.h>

int calcularLongitud(char *cadena);

int main()
{
    int longitud;
    char cadena[50];

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    longitud = calcularLongitud(cadena);

    printf("\nLongitud de la cadena: %d", longitud);
    return 0;
}

int calcularLongitud(char *cadena)
{
    if (cadena[0] == '\0'){
        return 0;
    }

    else{
        return 1 + calcularLongitud(&cadena[1]);
    }
}
