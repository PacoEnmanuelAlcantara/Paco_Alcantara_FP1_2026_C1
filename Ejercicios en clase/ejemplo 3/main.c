#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4];
    int b = 0;

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;

    for (int i = 0; i < 4; i++)
    {
        printf("\nValor de a[%i]=%i", i, a[i]);
    }
    b = a[3];
    printf("\nValor de b es igual a %d", b);
    return 0;
}
