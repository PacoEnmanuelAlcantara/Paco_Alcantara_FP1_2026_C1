#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Cuenta cuántas letras minúsculas y mayúsculas hay en cada cadena */

void minymay(char *cadena);

int main(){
    int i, n;
    char FRA[20][50];

    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la linea %d de texto: ", i + 1);
        fgets(FRA[i], 50, stdin);
    }

    printf("\n");

    for (i = 0; i < n; i++)
        minymay(FRA[i]);

    return 0;
}

/* Calcula minúsculas y mayúsculas de una cadena */
void minymay(char *cadena)
{
    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else if (isupper(cadena[i]))
            ma++;

        i++;
    }

    printf("\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d\n", ma);
}
