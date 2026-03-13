#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tratamiento = 0;
    int dias = 0;
    int edad = 0;
    float costo = 0.0;

    printf("Ingrese su tratamiento, edad y dias: ");
    scanf("%d %d %d", &tratamiento, &edad, &dias);

    switch(tratamiento){
        case 1:
            costo = dias * 2800;
            break;
        case 2:
            costo = dias * 1950;
            break;
        case 3:
            costo = dias * 2500;
            break;
        case 4:
            costo = dias * 1500;
            break;
        default: costo = -1;
    }

    if(costo != -1){
        if(edad >= 60){
          costo = costo * 0.75;

        } else{
            if(edad <= 25){
                costo = costo * 0.85;
            }
        }

    } else {
        printf("Tratamiento incorrecto");
    }

    printf("\nEl tratamiento es: %d \nLos dias son: %d \nEl costo es: %.2f", tratamiento, dias, costo);
    return 0;
}
