#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int clave;
    char nombre[20];
    int carrera;
    float promedio;
    float examen;
    char telefono[12];
} alumno;

float F1(FILE *);
void F2(FILE *, FILE *, FILE *, FILE *, FILE *, FILE *);
void F3(FILE *, FILE *, FILE *, FILE *, FILE *);

int main()
{
    float pro;
    FILE *archivo;
    FILE *archivo1;
    FILE *archivo2;
    FILE *archivo3;
    FILE *archivo4;
    FILE *archivo5;

    archivo = fopen("alu1.dat","r");

    archivo1 = fopen("car1.dat","w+");
    archivo2 = fopen("car2.dat","w+");
    archivo3 = fopen("car3.dat","w+");
    archivo4 = fopen("car4.dat","w+");
    archivo5 = fopen("car5.dat","w+");

    if((archivo != NULL) && (archivo1 != NULL) && (archivo2 != NULL) && (archivo3 != NULL) && (archivo4 != NULL) && (archivo5 != NULL)){
        pro = F1(archivo);

        printf("\nPROMEDIO EXAMEN DE ADMISION: %.2f", pro);

        F2(archivo, archivo1, archivo2, archivo3, archivo4, archivo5);

        F3(archivo1, archivo2, archivo3, archivo4, archivo5);
    } else {
        printf("\nNo se pudieron abrir los archivos.");
    }

    fclose(archivo);
    fclose(archivo1);
    fclose(archivo2);
    fclose(archivo3);
    fclose(archivo4);
    fclose(archivo5);

    return 0;
}

float F1(FILE *archivo1){
    alumno alu;
    float suma = 0, pro;
    int i = 0;

    fread(&alu,sizeof(alumno),1,archivo1);

    while(!feof(archivo1)){
        i++;
        suma += alu.examen;

        fread(&alu,sizeof(alumno),1,archivo1);
    }

    pro = suma / i;

    return pro;
}

void F2(FILE *archivo1, FILE *archivo2, FILE *archivo3, FILE *archivo4, FILE *archivo5, FILE *archivo6){
    alumno alu;

    rewind(archivo1);

    fread(&alu,sizeof(alumno),1,archivo1);

    while(!feof(archivo1)){
        if(((alu.examen >= 1300) && (alu.promedio >= 8)) || ((alu.examen >= 1400) && (alu.promedio >= 7))){
            switch(alu.carrera){
                case 1:
                    fwrite(&alu,sizeof(alumno),1,archivo2);
                    break;

                case 2:
                    fwrite(&alu,sizeof(alumno),1,archivo3);
                    break;

                case 3:
                    fwrite(&alu,sizeof(alumno),1,archivo4);
                    break;

                case 4:
                    fwrite(&alu,sizeof(alumno),1,archivo5);
                    break;

                case 5:
                    fwrite(&alu,sizeof(alumno),1,archivo6);
                    break;
            }
        }

        fread(&alu,sizeof(alumno),1,archivo1);
    }
}

void F3(FILE *archivo1, FILE *archivo2, FILE *archivo3, FILE *archivo4, FILE *archivo5){
    alumno alu;

    float cal[5], suma;
    int i;

    i = 0;
    suma = 0;

    rewind(archivo1);

    fread(&alu,sizeof(alumno),1,archivo1);

    while(!feof(archivo1)){
        i++;
        suma += alu.examen;

        fread(&alu,sizeof(alumno),1,archivo1);
    }

    if(i){
        cal[0] = suma / i;
    } else {
        cal[0] = 0;
    }

    rewind(archivo2);

    suma = 0;
    i = 0;

    fread(&alu,sizeof(alumno),1,archivo2);

    while(!feof(archivo2)){
        i++;
        suma += alu.examen;

        fread(&alu,sizeof(alumno),1,archivo2);
    }

    if(i){
        cal[1] = suma / i;
    } else {
        cal[1] = 0;
    }

    rewind(archivo3);

    suma = 0;
    i = 0;

    fread(&alu,sizeof(alumno),1,archivo3);

    while(!feof(archivo3)){
        i++;
        suma += alu.examen;

        fread(&alu,sizeof(alumno),1,archivo3);
    }

    if(i){
        cal[2] = suma / i;
    } else {
        cal[2] = 0;
    }

    rewind(archivo4);

    suma = 0;
    i = 0;

    fread(&alu,sizeof(alumno),1,archivo4);

    while(!feof(archivo4)){
        i++;
        suma += alu.examen;

        fread(&alu,sizeof(alumno),1,archivo4);
    }

    if(i){
        cal[3] = suma / i;
    } else {
        cal[3] = 0;
    }

    rewind(archivo5);

    suma = 0;
    i = 0;

    fread(&alu,sizeof(alumno),1,archivo5);

    while(!feof(archivo5)){
        i++;
        suma += alu.examen;

        fread(&alu,sizeof(alumno),1,archivo5);
    }

    if(i){
        cal[4] = suma / i;
    } else {
        cal[4] = 0;
    }

    for(i = 0; i < 5; i++){
        printf("\nPromedio carrera %d: %.2f", i + 1, cal[i]);
    }
}
