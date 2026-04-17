#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    FILE *archivo;

    archivo = fopen("archivo.txt", "a");

    if(archivo != NULL){
        while((caracter = getchar()) != '\n'){
            fputc(caracter, archivo);
        fclose(archivo);
        }
    } else {
        printf("No se pudo abrir el archivo.");
    }
    return 0;
}
