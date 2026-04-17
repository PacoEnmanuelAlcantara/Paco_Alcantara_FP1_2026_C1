#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;

}alumno;

void ordena(FILE * , FILE *);

int main()
{
    FILE *archivo1;
    FILE * archivo2;

    archivo1 = fopen("ad5.dat", "r");
    archivo2 = fopen("ad6.dat", "w")

    if((archivo1 != NULL) && (archivo2 != NULL)){
        ordena(archivo1, archivo2);
    } else {
        printf("No se pudo abrir el archivo.");
        fclose(archivo1);
        fclose(archivo2);
    }

    return 0;
}

void ordena(FILE archivo1* , FILE archivo2*){
    alumno alu;
    int t, n;
    t = sizeof(alumno);

    fseek(archivo1, sizeof(alumno), 2);
    n = (ftell(archivo1) / t) - 1;
    rewind(archivo1);

    for(int i = (n-1);i >= 0;i--){
        fseek(archivo1, i * sizeof(alumno), 0);
        fread(&alu, sizeof(alumno), 1, archivo1);
        fwrite(&alu, sizeof(alumno), 1, archivo2);
    }
}
