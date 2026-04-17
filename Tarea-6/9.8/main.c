#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;

} alumno;

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void escribe(FILE *);

int main()
{
    FILE *archivo;

    if ((archivo = fopen("ad1.dat", "w")) != NULL){
        escribe(archivo);
    }else{
        printf("\nNo se pudo abrir el archivo.");
    }

    fclose(archivo);

    return 0;
}

void escribe(FILE *archivo1)
{
    alumno alu;
    int i = 0, res;

    printf("\nDesea ingresar informacion sobre alumnos? Si-1  No-0: ");
    scanf("%d", &res);

    while (res){
        i++;

        printf("Matricula del alumno %d: ", i);
        scanf("%d", &alu.matricula);

        printf("Nombre del alumno %d: ", i);
        limpiarBuffer();
        gets(alu.nombre);

        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);

        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, archivo1);

        printf("\nDesea ingresar informacion sobre otros alumnos? Si-1 No-0: ");
        scanf("%d", &res);
    }
}

