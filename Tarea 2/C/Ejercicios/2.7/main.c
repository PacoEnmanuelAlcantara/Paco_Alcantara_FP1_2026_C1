#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vend1 = 0.0;
    float vend2 = 0.0;
    float vend3 = 0.0;

    printf("Ingresa las ventas de los vendedores: ");
    scanf("%f %f %f", &vend1,&vend2,&vend3);

    if(vend1 > vend2){

        if(vend1 > vend3){

            if(vend2 > vend3){
                printf("\nEl orden es \nVendedor 1: %.2f \nVendedor 2: %.2f \nVendedor 3: %.2f", vend1,vend2,vend3);
            } else {
                printf("\nEl orden es \nVendedor 1: %.2f \nVendedor 3: %.2f \nVendedor 2: %.2f", vend1,vend3,vend2);
            }
        } else {
            printf("\nEl orden es \nVendedor 3: %.2f \nVendedor 1: %.2f \nVendedor 2: %.2f", vend3,vend1,vend2);
        }
    } else {
        if(vend2 > vend3){

             if(vend1 > vend3){
                printf("\nEl orden es \nVendedor 2: %.2f \nVendedor 1: %.2f \nVendedor 3: %.2f", vend2,vend1,vend3);

             }else{
                printf("\nEl orden es \nVendedor 2: %.2f \nVendedor 3: %.2f \nVendedor 1: %.2f", vend2,vend3,vend1);
             }

        } else
            printf("\nEl orden es \nVendedor 3: %.2f \nVendedor 2: %.2f \nVendedor 1: %.2f", vend3,vend2,vend1);
    }

    return 0;
}
