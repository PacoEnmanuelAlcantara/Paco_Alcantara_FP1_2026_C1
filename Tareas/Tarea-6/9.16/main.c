#include <stdio.h>
#include <stdlib.h>

void sumayprom(FILE *);

int main()
{
    FILE *archivo;

    if( (archivo = fopen("archivo.txt","r")) != NULL ){
        sumayprom(archivo);
        fclose(archivo);

    } else {
        printf("No se pudo abrir el archivo.");
    }
    return 0;
}

void sumayprom(FILE *archivo1){
    char cadena[50];
    int i = 0;
    float suma = 0.0;
    float res;

        while(!feof(archivo1)){
        fgets(cadena,50,archivo1);
        res = atof(cadena);

        if(res){
            i++;
            suma+= res;
        }
    }

        printf("\nSuma: %.2f", suma);
    if(i){
        printf("\nPromedio: %.2f", suma/i);
    }
}
