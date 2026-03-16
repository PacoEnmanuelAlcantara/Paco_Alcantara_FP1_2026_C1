#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SUMAR 1
#define RESTAR 2
#define MULTIPLICAR 3
#define DIVIDIR 4
#define RAIZ 5
#define SALIR 0

#define errByNegative 51
#define errDivByZero 50
#define errOK 0

int functionSuma(float a, float b,float *r);
int functionDividir(float a, float b,float *r);
int functionResta(float a, float b, float *r);
int functionProducto(float a, float b, float *r);
int functionRaiz(double a,float *r);

int main()
{

    int menu = 100;
    int codErr = errOK;

    double aRaiz = 0.0;

    float a = 0.0;
    float b = 0.0;
    float res;

    do{
        //====MENU====
        printf("\n0-Salir -- 1-Sumar -- 2-Restar -- 3-Multiplicar -- 4-Dividir -- 5-Raiz\n");
        scanf("%d", &menu);


        //====SUMAR====
        if(menu == SUMAR){
        printf("ingrese dos numeros: ");
        scanf("%f %f", &a, &b);
        codErr = functionSuma(a,b,&res);

        if(codErr != errOK){
            printf("Error de suma");
        } else {
            printf("Suma de %f + %f es igual a: %f\n",a,b,res);
        }

        }

        //====RESTA====
        if(menu == RESTAR){
        printf("ingrese dos numeros: ");
        scanf("%f %f", &a, &b);
        codErr = functionResta(a,b,&res);

        if(codErr != errOK){
            printf("Error de resta");
        } else {
            printf("resta de %f - %f es igual a: %f\n",a,b,res);
        }

        }

        //====MULTIPLICACIÓN====
        if(menu == MULTIPLICAR){
        printf("ingrese dos numeros: ");
        scanf("%f %f", &a, &b);
        codErr = functionProducto(a,b,&res);

        if(codErr != errOK){
            printf("Error de producto");
        } else {
            printf("Producto de %f * %f es igual a: %f\n",a,b,res);
        }

        }

        //====DIVISÓN====
        if(menu == DIVIDIR){
        printf("ingrese dos numeros (DIVISOR Y DIVIDENDO): ");
        scanf("%f %f", &a, &b);
        codErr = functionDividir(a,b,&res);

        if(codErr == errDivByZero){
            printf("Error de division por cero");
        } else {
            printf("Division de %f / %f es igual a: %f\n",a,b,res);
        }

        }

        //====RAIZ====
        if(menu == RAIZ){
        printf("ingrese un numero: ");
        scanf("%lf", &aRaiz);
        codErr = functionRaiz(aRaiz,&res);

        if(codErr == errByNegative){
            printf("Error de raiz negativa");
        } else {
            printf("La raiz cuadrada de %lf es igual a: %f\n",aRaiz,res);
        }

        }

    }while(menu != SALIR);
    return 0;
}



int functionSuma(float a, float b, float *r){
    *r = a+b;
    return errOK;
}

int functionResta(float a, float b, float *r){
    *r = a-b;
    return errOK;
}

int functionProducto(float a, float b, float *r){
    *r = a*b;
    return errOK;
}

int functionDividir(float a, float b, float *r){
    if(b == 0){
        return errDivByZero;
    }

    *r = a/b;
    return errOK;
}

int functionRaiz(double a,float *r){
    if(a < 0){
        return errByNegative;
    }

    *r = (float)sqrt(a);
    return errOK;
}
