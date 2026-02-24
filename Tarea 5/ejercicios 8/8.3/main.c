#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void limpiarBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void quitarSalto(char *cadena)
{
    cadena[strcspn(cadena, "\n")] = '\0';
}

void Lectura(struct empleado *a)
{
    printf("\nIngrese el nombre del empleado: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    quitarSalto(a->nombre);

    printf("Ingrese el departamento de la empresa: ");
    fgets(a->departamento, sizeof(a->departamento), stdin);
    quitarSalto(a->departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    limpiarBuffer();

    printf("----Ingrese la direccion del empleado----");
    printf("\n\tCalle: ");
    fgets(a->direccion.calle, sizeof(a->direccion.calle), stdin);
    quitarSalto(a->direccion.calle);

    printf("\tNumero: ");
    scanf("%d", &a->direccion.numero);

    printf("\tCodigo Postal: ");
    scanf("%d", &a->direccion.cp);
    limpiarBuffer();

    printf("\tLocalidad: ");
    fgets(a->direccion.localidad, sizeof(a->direccion.localidad), stdin);
    quitarSalto(a->direccion.localidad);
}

int main(void)
{
    struct empleado e0 = {
        "Arturo",
        "Compras",
        15500.75,
        {"San Jeronimo", 120, 3490, "Toluca"}
    };

    struct empleado *e1, e3;

    e1 = (struct empleado *)malloc(sizeof(struct empleado));
    if (e1 == NULL) return 1;

    printf("\nIngrese el nombre del empleado 1: ");
    fgets(e1->nombre, sizeof(e1->nombre), stdin);
    quitarSalto(e1->nombre);

    printf("Ingrese el departamento de la empresa: ");
    fgets(e1->departamento, sizeof(e1->departamento), stdin);
    quitarSalto(e1->departamento);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    limpiarBuffer();

    printf("----Ingrese la direccion del empleado----");
    printf("\n\tCalle: ");
    fgets(e1->direccion.calle, sizeof(e1->direccion.calle), stdin);
    quitarSalto(e1->direccion.calle);

    printf("\tNumero: ");
    scanf("%d", &e1->direccion.numero);

    printf("\tCodigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    limpiarBuffer();

    printf("\tLocalidad: ");
    fgets(e1->direccion.localidad, sizeof(e1->direccion.localidad), stdin);
    quitarSalto(e1->direccion.localidad);

    Lectura(&e3);

    free(e1);

    return 0;
}
