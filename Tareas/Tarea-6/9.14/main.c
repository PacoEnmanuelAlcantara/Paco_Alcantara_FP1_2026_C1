#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void maymin(FILE *);

int main()
{
    FILE *archivo;

    if( (archivo = fopen("archivo.txt","r")) != NULL ){
        maymin(archivo);
        fclose(archivo);
    } else {
        printf("No se pudo abrir el archivo.");
    }
    return 0;
}

void maymin(FILE *archivo1){
    char letra;
    int mayus = 0;
    int minus = 0;

    while(!feof(archivo1)){
        letra = fgetc(archivo1);
        if(islower(letra)){
            minus++;
        } else if(isupper(letra)){
            mayus++;
        }
    }

    printf("Numero de minisculas: %d", minus);
    printf("\nNumero de mayusculas: %d", mayus);

}
