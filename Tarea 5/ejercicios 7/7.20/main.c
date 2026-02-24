#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcularLongitud(char *cadena);
int main()
{
    int indice, totalFilas, mayorLongitud = -1, posicionMayor = 0, longitudActual;
    char linea[50];
    char matriz[20][50];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &totalFilas);

    getchar();

    for (indice = 0; indice < totalFilas; indice++){

        printf("Ingrese la linea %d de texto (maximo 50 caracteres): ", indice + 1);
        fgets(matriz[indice], sizeof(matriz[indice]), stdin);
        matriz[indice][strcspn(matriz[indice], "\n")] = '\0';
    }

    printf("\n");

    for (indice = 0; indice < totalFilas; indice++){

        strcpy(linea, matriz[indice]);
        longitudActual = calcularLongitud(linea);

        if (longitudActual > mayorLongitud){

            mayorLongitud = longitudActual;
            posicionMayor = indice;
        }
    }

    printf("\nLa cadena con mayor longitud es:\n");
    puts(matriz[posicionMayor]);
    printf("Longitud: %d\n", mayorLongitud);

    return 0;
}

int calcularLongitud(char *cadena){
    int contador = 0;

    while (cadena[contador] != '\0')
        contador++;

    return contador;
}
