#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *invertir(char *cadena);
int main()
{
    char cadena[50];
    char resultado[50];

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    cadena[strcspn(cadena, "\n")] = '\0';

    strcpy(resultado, invertir(cadena));

    printf("Escribe la cadena inversa: ");
    puts(resultado);

    return 0;
}
char *invertir(char *cadena){

int inicio = 0, fin, longitud;
char temporal;

longitud = strlen(cadena);
fin = longitud - 1;

while(inicio < (longitud / 2)){
    temporal = cadena[inicio];
    cadena[inicio] = cadena[fin];
    cadena[fin] = temporal;

    inicio++;
    fin--;
}
    return cadena;
}

