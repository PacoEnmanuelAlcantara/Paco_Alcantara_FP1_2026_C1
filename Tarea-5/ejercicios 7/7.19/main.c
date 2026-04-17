#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPalabras(char *cadena);
int main()
{
    int contador = 0;
    char cadena[50];

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';
    strcat(cadena, " ");

    contador = contarPalabras(cadena);

    printf("La cadena de texto tiene un total de %d palabras", contador);
    return 0;
}


int contarPalabras(char *cadena){
   int contador = 0;
   char *posicion;

   posicion = strstr(cadena, " ");

   while(posicion != NULL){
    contador++;
    cadena = posicion + 1;
    posicion = strstr(cadena, " ");
   }
   return contador;
}
