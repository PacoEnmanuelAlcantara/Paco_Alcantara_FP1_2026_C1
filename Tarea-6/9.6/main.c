#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mat;
    float cal, pro;
    FILE *archivo;

    if ((archivo = fopen("archivo.txt", "r")) != NULL){
        fscanf(archivo, "%d", &n);

        for (int i = 0; i < n; i++){
            fscanf(archivo, "%d", &mat);
            printf("%d\t", mat);

            pro = 0;

            for (int j = 0; j < 5; j++){
                fscanf(archivo, "%f", &cal);
                pro += cal;
            }

            printf("\t %.2f", pro / 5);
            printf("\n");
        }
        fclose(archivo);
    }else{
        printf("No se pudo abrir el archivo.");
    }

    return 0;
}
