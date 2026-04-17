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
    char cadena[50];
    int minus = 0;
    int mayus = 0;

    while(!feof(archivo1)){
        fgets(cadena,50,archivo1);

        for(int i = 0; cadena[i] != '\0';i++){
            if(islower(cadena[i])){
                minus++;
            }else if(isupper(cadena[i])){
                mayus++;
            }
        }
    }
    printf("Numero de minisculas: %d", minus);
    printf("\nNumero de mayusculas: %d", mayus);
}
