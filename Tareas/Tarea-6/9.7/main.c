#include <stdio.h>
#include <stdlib.h>

void promedio(FILE *);

int main()
{
    FILE *archivo;

    if ((archivo = fopen("archivo.txt", "r")) != NULL){
        promedio(archivo);
        fclose(archivo);

    }else{
        printf("No se pudo abrir el archivo");
    }

    return 0;
}

void promedio(FILE *archivo1){
    int n, mat;
    float pro, cal;

    fscanf(archivo1, "%d", &n);

    for (int i = 0; i < n; i++){
        fscanf(archivo1, "%d", &mat);
        printf("%d\t", mat);

        pro = 0;

        for (int j = 0; j < 5; j++){
            fscanf(archivo1, "%f", &cal);
            pro += cal;
        }

        printf("\t %.2f", pro / 5);
        printf("\n");
    }
}
