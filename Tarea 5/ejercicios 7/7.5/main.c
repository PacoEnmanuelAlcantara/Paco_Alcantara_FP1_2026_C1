#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    /* Lectura y conversión a entero */
    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);

    i = atoi(cad0);   // string → int
    printf("\n%s \t %d", cad0, i + 3);

    /* Lectura y conversión a double */
    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);

    d = atof(cad0);   // string → double
    printf("\n%s \t %.2lf", cad0, d + 1.50);

    /* Conversión con control de resto */
    d = strtod(cad0, &cad1);
    printf("\n%s \t %.2lf", cad0, d + 1.50);
    puts(cad1);   // muestra lo que sobró

    /* Conversión a long */
    l = atol(cad0);
    printf("\n%s \t %ld", cad0, l + 10);

    /* Conversión avanzada a long */
    l = strtol(cad0, &cad1, 0);
    printf("\n%s \t %ld", cad0, l + 10);
    puts(cad1);
    return 0;
}
