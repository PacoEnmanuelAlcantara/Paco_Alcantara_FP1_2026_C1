#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1 = 0;
    float num2 = 0.0;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    if(num1 < 0 || num1 > 50){
        num2 = 0;

    } else{

        if(num1 <= 10){
        num2 = (4/num1) - num1;
      } else{

        if(num1 <= 25){
            num2 = pow(num1,3) - 12;
        } else {
            num2 = pow(num1,2) + pow(num1,3) - 18;
        }
    }

    }

    printf("%d %.2f", num1, num2);
    return 0;
}
