#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int clave;
    int departamento;
    float salario;
    float ventas[12];

} empleado;

void incrementa(FILE *);

int main(){
    FILE *archivo;

    if ((archivo = fopen("ad5.dat", "r+")) != NULL){
        incrementa(archivo);

    }else{
        printf("\nNo se pudo abrir el archivo.");
    }

    rewind(archivo);
    fclose(archivo);

    return 0;
}

void incrementa(FILE *archivo1)
{
    int i, t;
    float sum;
    empleado emple;

    t = sizeof(empleado);

    fread(&emple, sizeof(empleado), 1, archivo1);

    while (!feof(archivo1)){
        i = ftell(archivo1) / t;

        sum = 0;

        for (int j = 0; j < 12; j++){
            sum += emple.ventas[j];
        }

        if (sum > 1000000){
            emple.salario = (emple.salario * 1.10);

            fseek(archivo1, (i - 1) * sizeof(empleado), 0);

            fwrite(&emple, sizeof(empleado), 1, archivo1);

            fseek(archivo1, i * sizeof(empleado), 0);
        }

        fread(&emple, sizeof(empleado), 1, archivo1);
    }
}
