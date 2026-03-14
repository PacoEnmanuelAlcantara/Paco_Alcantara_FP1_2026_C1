#include <stdio.h>
#include <stdlib.h>

int main()
{
    int clave = 0;
    int categoria = 0;
    int antiguedad = 0;
    int salida = 0;

    printf("Ingrese su clave, categoria y antiguedad: ");
    scanf("%d %d %d", &clave, &categoria, &antiguedad);

    switch(categoria){

        case 3:
        case 4:
            if(antiguedad >= 5){
                salida = 1;
            } else{
                salida = 0;
            }
            break;

        case 2:
            if(antiguedad >= 7){
               salida = 1;
            } else {
                salida = 0;
            }
            break;

        default: salida = 0;
        break;
    }

    if(salida == 1){
        printf("\nEl empleado con la clave: %d \nCumple con las condiciones para el puesto.", clave);
    } else {
        printf("\nEl empleado con la clave: %d \nNo cumple con las condiciones para el puesto.",clave);
    }
    return 0;
}
