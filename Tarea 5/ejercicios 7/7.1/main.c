#include <stdio.h>

/* Limpia el buffer de entrada */
void limpiarBuffer(void)
{
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF);
}

int main(void)
{
    char p1, p2, p3 = '$';

    printf("Ingrese un caracter: ");
    p1 = getchar();
    limpiarBuffer();

    printf("\nIngresaste: ");
    putchar(p1);

    printf("\nEl caracter p3 es: ");
    putchar(p3);

    printf("\n");
    return 0;
}
