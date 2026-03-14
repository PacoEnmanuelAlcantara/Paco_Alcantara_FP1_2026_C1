#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertir(char *cadena);
int main()
{
    char cadena[50];
    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';


    invertir(cadena);
    return 0;
}

void invertir(char *cadena){

    if(cadena[0] != '\0'){
    invertir(&cadena[1]);
    putchar(cadena[0]);
    }

}

