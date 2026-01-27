#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carrera = 0;
    int matricula = 0;
    int meses = 0;
    float avg = 0.0;

    printf("Ingrese su carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica): ");
    scanf("%d", &carrera);

    printf("Ingrese su matricula: ");
    scanf("%d", &matricula);

    printf("Ingrese su meses cursado y promedio: ");
    scanf("%d %f", &meses, &avg);

    switch(carrera){
        case 1:
            if(meses >= 6 && avg > 8.5){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, avg);
            }
        break;

        case 2:
            if(meses >= 5 && avg > 9.0){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, avg);
            }
        break;

        case 3:
            if(meses >= 6 && avg > 8.8){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, avg);
            }
        break;

        case 4:
            if(meses >= 7 && avg > 9.0){
                printf("\nMatricula: %d \nCarrera: %d \nPromedio: %.2f", matricula, carrera, avg);
            }
        break;

        default: printf("Error en la carrera");
        break;
    }

    return 0;
}
