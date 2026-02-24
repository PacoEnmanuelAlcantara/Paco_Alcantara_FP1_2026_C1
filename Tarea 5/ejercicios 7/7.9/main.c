#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char *cadena, char car);

int main()
{
    char caracterBuscado, cadena[50];
    int cantidad;

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("\nIngrese el caracter buscado: ");
    caracterBuscado = getchar();

    cantidad = contarCaracteres(cadena, caracterBuscado);

    printf("\nEl caracter '%c' se repite %d veces en la cadena %s", caracterBuscado, cantidad, cadena);
    return 0;
}

int contarCaracteres(char *cadena, char car){
    int indice = 0, contador = 0;

    while(cadena[indice] != '\0'){
        if(cadena[indice] == car){
            contador++;

        }
        indice++;
    }
    return contador;
}
