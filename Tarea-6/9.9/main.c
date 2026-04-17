#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;

} alumno;

void lee(FILE *);

int main(){
    FILE *archivo;

    if ((archivo = fopen("ad1.dat", "r")) != NULL){
        lee(archivo);
    }
    else{
        printf("\nNo se pudo abrir el archivo.");
    }

    fclose(archivo);

    return 0;
}

void lee(FILE *archivo1){
    alumno alu;

    fread(&alu, sizeof(alumno), 1, archivo1);

    while (!feof(archivo1)){

        printf("\nMatricula: %d", alu.matricula);

        printf("\tCarrera: %d", alu.carrera);

        printf("\tPromedio: %f\t ", alu.promedio);

        puts(alu.nombre);

        fread(&alu, sizeof(alumno), 1, archivo1);
    }
}
