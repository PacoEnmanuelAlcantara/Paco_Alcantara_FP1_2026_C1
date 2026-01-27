#include <stdio.h>
#include <stdlib.h>

int main()
{
    int clave = 0;
    int tiempo = 0;
    float costo = 0.0;

    printf("Introduzca la clave y el tiempo: ");
    scanf("%d %d", &clave, &tiempo);

    switch(clave){

    case 1:
        costo = (tiempo * 0.13)/60;
        break;
    case 2:
        costo = (tiempo * 0.11)/60;
        break;
    case 5:
        costo = (tiempo * 0.22)/60;
        break;
    case 6:
        costo = (tiempo * 0.19)/60;
        break;
    case 7:
    case 9:
        costo = (tiempo * 0.17)/60;
        break;
    case 10:
        costo = (tiempo * 0.20)/60;
        break;
    case 15:
        costo = (tiempo * 0.39)/60;
        break;
    case 20:
        costo = (tiempo * 0.28)/60;
        break;
    default: costo = -1;
    }

    if(costo != -1){
       printf("\nLa clave es: %d \nEl tiempo es: %d \nEl costo es: %.2f", clave, tiempo, costo);
    } else {
        printf("\nLa clave es incorrecta");
    }
    return 0;
}
