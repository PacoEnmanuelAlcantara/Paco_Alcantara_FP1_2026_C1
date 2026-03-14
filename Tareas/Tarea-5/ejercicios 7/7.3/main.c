#include <stdio.h>
#include <stdlib.h>

/* Limpia el buffer de entrada */
void limpiarBuffer(void)
{
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF);
}

/* Funciones para manejo de cadenas */

void main(void)
{
    char *cad0 = "Buenos días";   // cadena literal
    char cad1[20] = "Hola";       // arreglo con espacio extra
    char cad2[] = "México";       // tamaño automático
    char cad3[] = {'B','i','e','n','v','e','n','i','d','o','\0'}; // manual
    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena cad0 es: ");
    puts(cad0);

    printf("\nLa cadena cad1 es: ");
    printf("%s", cad1);

    printf("\nLa cadena cad2 es: ");
    puts(cad2);

    printf("\nLa cadena cad3 es: ");
    puts(cad3);

    printf("\nIngrese una línea de texto —gets—:\n");
    gets(cad4);   // lee línea completa
    printf("\nLa cadena cad4 es: ");
    puts(cad4);

    limpiarBuffer();

    printf("\nIngrese una línea de texto —scanf—:\n");
    scanf("%s", cad5);   // lee solo una palabra
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);

    limpiarBuffer();

    char p;
    int i = 0;

    printf("\nIngrese una línea —getchar—:\n");
    while ((p = getchar()) != '\n')
        cad6[i++] = p;

    cad6[i] = '\0';  // fin de cadena

    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
