#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void limpiarBuffer(void){
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF);
}

int main(){
    char p1;

    printf("\nIngrese un caracter para saber si es un digito: ");
    p1 = getchar();

    if (isdigit(p1))
        printf("%c es un digito\n", p1);
    else
        printf("%c no es un digito\n", p1);

    limpiarBuffer();

    printf("\nIngrese un caracter para saber si es letra: ");
    p1 = getchar();

    if (isalpha(p1))
        printf("%c es una letra\n", p1);
    else
        printf("%c no es una letra\n", p1);

    limpiarBuffer();

    printf("\nIngrese un caracter para ver si es minuscula: ");
    p1 = getchar();

    if (isalpha(p1))
        if (islower(p1))
            printf("%c es una letra minuscula\n", p1);
        else
            printf("%c no es una letra minuscula\n", p1);
    else
        printf("%c no es una letra\n", p1);

    limpiarBuffer();

    printf("\nIngrese una letra para convertirla a minuscula: ");
    p1 = getchar();

    if (isalpha(p1))
        if (isupper(p1))
            printf("%c fue convertida a minuscula\n", tolower(p1));
        else
            printf("%c es una letra minuscula\n", p1);
    else
        printf("%c no es una letra\n", p1);

return 0;
}
