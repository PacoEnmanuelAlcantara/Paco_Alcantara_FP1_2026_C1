#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;

} alumno;

void modifica(FILE *);

int main()
{
    FILE *archivo;

    if ((archivo = fopen("ad1.dat", "r+")) != NULL){
        modifica(archivo);
    }else{
        printf("\nNo se pudo abrir el archivo.");
    }

    fclose(archivo);

    return 0;
}

void modifica(FILE *archivo1)
{
    int registros;
    alumno alu;

    printf("\nIngrese el numero de registro que desea modificar: ");
    scanf("%d", &registros);

    fseek(archivo1, (registros - 1) * sizeof(alumno), 0);

    fread(&alu, sizeof(alumno), 1, archivo1);

    printf("\nIngrese el promedio del alumno: ");
    scanf("%f", &alu.promedio);

    fseek(archivo1, (registros - 1) * sizeof(alumno), 0);

    fwrite(&alu, sizeof(alumno), 1, archivo1);
}
