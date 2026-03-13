#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long fiboPrimero = 0;
    long long fiboSegundo = 1;
    long long siguiente = 0;

    printf("\nFibonacci(%d) \nFibonacci(%d)\n", fiboPrimero,fiboSegundo);

    for(int i = 3; i <= 50; i++){
        siguiente = fiboPrimero + fiboSegundo;

        fiboPrimero = fiboSegundo;
        fiboSegundo = siguiente;

        printf("\n%lld", siguiente);
    }
    return 0;
}
