#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[3];
    int contador = 0;
    int numeroUsuario;

    srand(time(NULL));

    int numeroAleatorio = (rand() % 31) + 10;

    for(int i = 0;i < 3;i++){

        int numeroAleatorio = (rand() % 31) + 10;
        arr[i] = numeroAleatorio;
        printf("\nNumero aleatorio %d es: %d", i, numeroAleatorio);

        printf("\nIngrese un numero: ");
        scanf("%d", &numeroUsuario);

        if(arr[i] == numeroUsuario){
            contador++;
        }
    }

    if(contador == 3){
        printf("\n--Premio ganado--");
    } else {
        printf("\n--Premio no ganado--");
    }

    return 0;
}
