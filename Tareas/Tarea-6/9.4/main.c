#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[50];
    FILE *archivo;

    if ((archivo = fopen("archivo.txt", "r")) != NULL){
        while (!feof(archivo)){
            fgets(cadena, 50, archivo);
            puts(cadena);
        }

        fclose(archivo);
    }
    else{
        printf("No se pudo abrir el archivo");
    }

    return 0;
}
