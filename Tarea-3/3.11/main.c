#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res1 = 0;
    int res2 = 0;
    int res3 = 0;
    int res4 = 0;
    int res5 = 0;

    float cal = 0.0;

    printf("Ingrese la calificacion: ");
    scanf("%f", &cal);

    while(cal != -1){
            if(cal < 4){
                res1 += 1;
            } else {
                if(cal < 6){
                    res2 += 1;
                }else {
                    if(cal < 8){
                        res3 += 1;
                    } else {
                        if(cal < 9){
                            res4 += 1;
                        } else {
                            res5 += 1;
                        }
                    }
                }
            }
        printf("Ingrese la calificacion: ");
        scanf("%f", &cal);
    }

    printf("\n0..3.99 = %d", res1);
    printf("\n4..5.99 = %d", res2);
    printf("\n6..7.99 = %d", res3);
    printf("\n8..8.99 = %d", res4);
    printf("\n9..10 = %d", res5);
    return 0;
}
