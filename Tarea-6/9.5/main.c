#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, mat = 0;
    float cal;
    FILE *archivo;

    printf("\nIngrese el numero de alumnos: ");
    scanf("%d", &n);

    if((archivo = fopen("archivo.txt","w")) != NULL){
        fprintf(archivo, "%d", n);

        for(int i = 0; i < n; i++){
            printf("Ingrese la matricula del alumno %d: ", i+1);
            scanf("%d", &mat);

            fprintf(archivo, "%d", mat);

            for(int j = 0;j < 5;j++){
                printf("\nIngrese la calificacion %d: \n", j+1);
                scanf("%f", &cal);

                fputs("\n", archivo);
                fprintf(archivo, "%.2f", cal);
                fputs("\n", archivo);

            }
        }
        fclose(archivo);
    } else{
        printf("No se pudo abrirse el archivo.");
    }
    return 0;
}
