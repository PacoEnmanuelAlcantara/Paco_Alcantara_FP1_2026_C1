#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    FILE *archivo;

    if((archivo = fopen("archivo.txt","r") != NULL)){
        while(!feof(archivo)){

            caracter = fgetc(archivo);
            putchar(caracter);
        }
        fclose(archivo);
    } else{
        printf("No se pudo abrir el archivo.");
    }
    return 0;
}
