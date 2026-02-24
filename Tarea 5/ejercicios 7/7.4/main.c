#include <stdio.h>
#include <stdlib.h>

void limpiarBuffer(void){
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF);
}

int main()
{
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);

    cad0 = "Brasil";
    puts(cad0);

    char *cad1 = "";
    gets(cad1);

    char cad2[20] = "México";
    puts(cad2);

    gets(cad2);
    puts(cad2);

    /* Conversión de cadenas a números */
    int i;
    double d;
    long l;
    char cad3[20], *ptr;

    printf("\nIngrese una cadena: ");
    gets(cad3);
    i = atoi(cad3);
    printf("\n%s \t %d", cad3, i + 3);

    printf("\nIngrese otra cadena: ");
    gets(cad3);
    d = atof(cad3);
    printf("\n%s \t %.2lf", cad3, d + 1.50);

    d = strtod(cad3, &ptr);
    return 0;
}
