#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula = 0;
    int maMatricula = 0;
    int paMatricula = 0.0;

    float nota = 0.0;
    float sumaNotas = 0.0;

    float promedioActual = 0.0;
    float maPromedio = 0.0;
    float paPromedio = 11.0;

    printf("Ingrese la matricula del primer alumno: ");
    scanf("%d",&matricula);

    while (matricula){

        sumaNotas = 0.0;
        for(int i = 1; i <= 5; i++){
            printf("Ingrese la nota %d: ",i);
            scanf("%f", &nota);
            sumaNotas += nota;
        }
        promedioActual = sumaNotas/5;
        printf("\nLa matricula es: %d \nEl promedio es: %.2f\n",matricula,promedioActual);

        if(promedioActual > maPromedio){
            maPromedio = promedioActual;
            maMatricula = matricula;
        }

        if(promedioActual < paPromedio){
            paPromedio = promedioActual;
            paMatricula = matricula;
        }

        printf("\nIngrese la matricula del siguiente alumno: ");
        scanf("%d",&matricula);
    }

    printf("\nLa matricula del mejor alumno es: %d \nEl promedio del mejor alumno es: %.2f\n",maMatricula,maPromedio);
    printf("\nLa matricula del peor alumno es: %d \nEl promedio del peor alumno es: %.2f",paMatricula,paPromedio);

    return 0;
}
