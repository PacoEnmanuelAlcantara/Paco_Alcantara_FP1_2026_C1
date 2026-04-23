#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cancion {
    char titulo[100];
    struct Cancion* siguiente;
};

int main() {
    struct Cancion* c1 = (struct Cancion*)malloc(sizeof(struct Cancion));
    struct Cancion* c2 = (struct Cancion*)malloc(sizeof(struct Cancion));
    struct Cancion* c3 = (struct Cancion*)malloc(sizeof(struct Cancion));

    strcpy(c1->titulo, "Cancion 1");
    strcpy(c2->titulo, "Cancion 2");
    strcpy(c3->titulo, "Cancion 3");

    c1->siguiente = c2;
    c2->siguiente = c3;
    c3->siguiente = NULL;


    // Recorrer
    struct Cancion* actual = c1;
    while (actual != NULL) {
        printf("- %s\n", actual->titulo);
        actual = actual->siguiente;
    }

    free(c1);
    free(c2);
    free(c3);
    return 0;
}
