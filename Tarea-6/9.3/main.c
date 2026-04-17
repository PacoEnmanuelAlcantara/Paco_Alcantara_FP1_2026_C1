#include <stdio.h>
#include <stdlib.h>

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    char cadena[50];
    int resultado;
    FILE *archivo;

    if ((archivo = fopen("archivo.txt", "w")) != NULL){
        printf("\nDesea ingresar una cadena? Si-1 No-0: ");
        scanf("%d", &resultado);

       while(resultado){
        limpiarBuffer();

        printf("Ingresa la cadena: ");
        gets(cadena);
        fputs(cadena, archivo);

        printf("Desea ingresar otra cadena? Si-1 No-0: ");
        scanf("%d", &resultado);

        fputs("n", archivo);
       }
       fclose(archivo);

    }else{
        printf("No se pudo abrir el archivo.");
    }
    return 0;
}
