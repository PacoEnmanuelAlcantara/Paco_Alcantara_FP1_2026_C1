#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    char textoNumero[50];
    int contador = 0;
    float sumaTotal = 0.0;

    printf("Desea ingresar una cadena de caracteres (S/N)? ");
    opcion = getchar();
    getchar();

    while(opcion == 'S'){
        printf("\nIngrese una cadena de caracteres: ");
        fgets(textoNumero, sizeof(textoNumero), stdin);

        contador++;
        sumaTotal += atof(textoNumero);

        printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
        opcion = getchar();
        getchar();
    }

    printf("La suma es igual: %.2f", sumaTotal);

    if(contador > 0){
        printf("\nEl promedio es igual a %.2f", sumaTotal/contador);
    } else {
        printf("\nNo se ingresaron valores");
    }
    return 0;
}
