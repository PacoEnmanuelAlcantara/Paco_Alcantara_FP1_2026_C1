#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char materia[20];
    int calificacion;
} matcal;

typedef struct{
    int matricula;
    char nombre[20];
    matcal cal[5];
} alumno;

void F1(FILE *);
void F2(FILE *);
float F3(FILE *);

int main()
{
    float pro;
    FILE *archivo;

    if((archivo = fopen("esc.dat","r")) != NULL){
        F1(archivo);
        F2(archivo);
        pro = F3(archivo);
        printf("\n\nPROMEDIO GENERAL MATERIA 4: %f", pro);
    } else {
        printf("\nEl archivo no se pudo abrir.");
    }

    fclose(archivo);
}

void F1(FILE *archivo1){
    alumno alu;
    int j;
    float suma, pro;

    printf("\nMATRICULA y PROMEDIOS");

    fread(&alu,sizeof(alumno),1,archivo1);

    while(!feof(archivo1)){
        printf("\nMatricula: %d", alu.matricula);

        suma = 0.0;

        for(j = 0; j < 5; j++){
            suma += alu.cal[j].calificacion;
        }

        pro = suma / 5;

        printf("\tPromedio: %f", pro);

        fread(&alu,sizeof(alumno),1,archivo1);
    }
}

void F2(FILE *archivo1){
    alumno alu;

    rewind(archivo1);

    printf("\n\nALUMNOS CON CALIFICACION > 9 EN MATERIA 3");

    fread(&alu,sizeof(alumno),1,archivo1);

    while(!feof(archivo1)){
        if(alu.cal[2].calificacion > 9){
            printf("\nMatricula del alumno: %d", alu.matricula);
        }

        fread(&alu,sizeof(alumno),1,archivo1);
    }
}

float F3(FILE *archivo1){
    alumno alu;
    int i = 0;
    float suma = 0, pro;

    rewind(archivo1);

    fread(&alu,sizeof(alumno),1,archivo1);

    while(!feof(archivo1)){
        i++;
        suma += alu.cal[3].calificacion;

        fread(&alu,sizeof(alumno),1,archivo1);
    }

    pro = (float)suma / i;

    return pro;
}
