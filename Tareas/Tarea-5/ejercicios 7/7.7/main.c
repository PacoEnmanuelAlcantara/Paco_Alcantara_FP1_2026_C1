#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Funciones de string.h para comparar, medir y buscar en cadenas */

int main(){
    int i;

    char cad0[20] = "Hola Mexico";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola Mexico";

    char *c;   /* puntero para búsquedas */
    char c3;   /* carácter encontrado */

    /* Comparaciones */
    i = strcmp(cad0, cad1);
    printf("\nComparacion cad0 vs cad1: %d", i);

    i = strcmp(cad0, cad2);
    printf("\nComparacion cad0 vs cad2: %d", i);

    i = strcmp(cad0, cad3);
    printf("\nComparacion cad0 vs cad3: %d", i);

    /* Longitudes */
    i = strlen(cad0);
    printf("\nLongitud cad0: %d", i);

    i = strlen(cad1);
    printf("\nLongitud cad1: %d", i);

    /* Busqueda de caracteres */
    c = strchr(cad1, 'G');
    if (c != NULL)
    {
        c3 = *c;
        printf("\nCaracter encontrado en cad1: %c", c3);
    }

    c = strchr(cad2, 'V');
    if (c != NULL)
    {
        c3 = *c;
        printf("\nCaracter encontrado en cad2: %c", c3);
    }

    return 0;
}
