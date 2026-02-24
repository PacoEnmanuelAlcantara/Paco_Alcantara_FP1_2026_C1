#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intercambiarFilas(char matriz[][30], int totalFilas);

int main(void)
{
    int indice, totalFilas;
    char matriz[20][30];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &totalFilas);

    getchar();

    for (indice = 0; indice < totalFilas; indice++){

        printf("Ingrese la linea de texto numero %d: ", indice + 1);
        fgets(matriz[indice], sizeof(matriz[indice]), stdin);
        matriz[indice][strcspn(matriz[indice], "\n")] = '\0';
    }

    printf("\n\n");

    intercambiarFilas(matriz, totalFilas);

    for (indice = 0; indice < totalFilas; indice++){

        printf("Impresion de la linea de texto %d: ", indice + 1);
        puts(matriz[indice]);
    }

    return 0;
}

void intercambiarFilas(char matriz[][30], int totalFilas){

    int inicio, fin;
    char auxiliar[30];

    fin = totalFilas - 1;

    for (inicio = 0; inicio < totalFilas / 2; inicio++){

        strcpy(auxiliar, matriz[inicio]);
        strcpy(matriz[inicio], matriz[fin]);
        strcpy(matriz[fin], auxiliar);
        fin--;
    }
}
