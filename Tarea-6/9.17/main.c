#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void cambia(FILE *, FILE *);

int main()
{
    FILE *archivo1;
    FILE *archivo2;

    archivo1 = fopen("archivo1.txt", "r");
    archivo2 = fopen("archivo2.txt", "w");

    if ((archivo1 != NULL) && (archivo2 != NULL)){
        cambia(archivo1, archivo2);
        fclose(archivo1);
        fclose(archivo2);
    }
    else{
        printf("No se pudo abrir el archivo.");
    }

    return 0;
}

void cambia(FILE *archivo1, FILE *archivo2)
{
    int i, j, k;
    char cadena[30], *cad1 = "", *cad2 = "", aux[30];

    while (!feof(archivo1)){
        fgets(cadena, 30, archivo1);

        strcpy(cad1, cadena);

        cad2 = strstr(cad1, "méxico");

        while (cad2 != NULL){
            cad2[0] = 'M';

            i = strlen(cad1);
            j = strlen(cad2);
            k = i - j;

            if (k){
                strncpy(aux, cad1, k);
                aux[k] = '\0';
                strcat(aux, cad2);
                strcpy(cad1, aux);
            }
            else{
                strcpy(cad1, cad2);
            }

            cad2 = strstr(cad1, "méxico");
        }

        fputs(cad1, archivo2);
    }
}
