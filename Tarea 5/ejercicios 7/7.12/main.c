#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char cadena[50];
    int mi;
    int ma;
    int contador = 0;

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    while(cadena[contador] != '\0'){

       if(islower(cadena[contador])){
        mi++;
       } else if (isupper(cadena[contador])){
        ma++;
       }
        contador++;
    }

    printf("\nLa cantidad de mayusculas es: %d", ma);
    printf("\nLa cantidad de minusculas es: %d", mi);

    return 0;
}
