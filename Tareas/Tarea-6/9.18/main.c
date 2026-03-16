#include <stdio.h>

void mezcla(FILE *, FILE *, FILE *);

int main()
{
    FILE *archivo1;
    FILE *archivo2;
    FILE *archivo3;

    archivo1 = fopen("arc9.dat", "r");
    archivo2 = fopen("arc10.dat", "r");
    archivo3 = fopen("arc11.dat", "w");

    if ((archivo1 != NULL && archivo2 != NULL) && archivo3 != NULL){
        mezcla(archivo1, archivo2, archivo3);
        fclose(archivo1);
        fclose(archivo2);
        fclose(archivo3);
    }
    else{
        printf("No se pudo abrir el archivo.");
    }

    return 0;
}

void mezcla(FILE *archivo1, FILE *archivo2, FILE *archivo3)
{
    int i, matricula, matricula2, bandera = 1, bandera2 = 1;
    float calificaciones[3], calificaciones2[3], cal;

    while (((!feof(archivo1)) || !bandera) && ((!feof(archivo2)) || !bandera2)){
        if (bandera){
            fscanf(archivo1, "%d", &matricula);
            for (i = 0; i < 3; i++){
                fscanf(archivo1, "%f", &calificaciones[i]);
            }
            bandera = 0;
        }

        if (bandera2){
            fscanf(archivo2, "%d", &matricula2);
            for (i = 0; i < 3; i++)
            {
                fscanf(archivo2, "%f", &calificaciones2[i]);
            }
            bandera2 = 0;
        }

        if (matricula < matricula2){
            fprintf(archivo3, "%d\t", matricula);

            for (i = 0; i < 3; i++){
                fprintf(archivo3, "%f\t", calificaciones[i]);
            }
            fputs("\n", archivo3);
            bandera = 1;
        }
        else{
            fprintf(archivo3, "%d\t", matricula2);

            for (i = 0; i < 3; i++){
                fprintf(archivo3, "%f\t", calificaciones2[i]);
            }
            fputs("\n", archivo3);
            bandera2 = 1;
        }
    }

    if (!bandera){
        fprintf(archivo3, "%d\t", matricula);

        for (i = 0; i < 3; i++){
            fprintf(archivo3, "%f\t", calificaciones[i]);
        }
        fputs("\n", archivo3);

        while (!feof(archivo1)){
            fscanf(archivo1, "%d", &matricula);
            fprintf(archivo3, "%d\t", matricula);

            for (i = 0; i < 3; i++){
                fscanf(archivo1, "%f", &cal);
                fprintf(archivo3, "%f\t", cal);
            }

            fputs("\n", archivo3);
        }
    }

    if (!bandera2){
        fprintf(archivo3, "%d\t", matricula2);
        for (i = 0; i < 3; i++){
            fprintf(archivo3, "%f\t", calificaciones2[i]);
        }
        fputs("\n", archivo3);

        while (!feof(archivo2)){
            fscanf(archivo2, "%d", &matricula2);
            fprintf(archivo3, "%d\t", matricula2);

            for (i = 0; i < 3; i++){
                fscanf(archivo2, "%f", &cal);
                fprintf(archivo3, "%f\t", cal);
            }

            fputs("\n", archivo3);
        }
    }
}
