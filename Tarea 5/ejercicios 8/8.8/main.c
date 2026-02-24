#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char cal[20];
    int num;
    char col[20];
    char cp[5];
    char ciu[20];
} domicilio;

typedef struct {
    char nom[20];
    int edad;
    char sexo;
    int con;
    domicilio dom;
    char tel[10];
} paciente;

void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);

int main(void)
{
    paciente HOSPITAL[100];

    int TAM;

    do{
        printf("Ingrese el numero de pacientes: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);

    return 0;
}

void Lectura(paciente A[], int T)
{
    int I;
    for (I = 0; I < T; I++) {
        printf("\nIngrese datos del paciente %d", I + 1);

        printf("\n\tNombre: ");
        scanf(" %19[^\n]", A[I].nom);

        printf("\tEdad: ");
        scanf("%d", &A[I].edad);

        printf("\tSexo (M/F): ");
        scanf(" %c", &A[I].sexo);

        printf("\tCondicion (1-5): ");
        scanf("%d", &A[I].con);

        printf("\tCalle: ");
        scanf("%19s", A[I].dom.cal);

        printf("\tNumero: ");
        scanf("%d", &A[I].dom.num);

        printf("\tColonia: ");
        scanf("%19s", A[I].dom.col);

        printf("\tCodigo Postal: ");
        scanf("%4s", A[I].dom.cp);

        printf("\tCiudad: ");
        scanf("%19s", A[I].dom.ciu);

        printf("\tTelefono: ");
        scanf("%9s", A[I].tel);
    }
}

void F1(paciente A[], int T)
{
    int I, H = 0, M = 0;
    for (I = 0; I < T; I++){
        if (A[I].sexo == 'M' || A[I].sexo == 'm') {
            H++;
        } else {
            M++;
        }
    }
    printf("\nPorcentaje por sexo");
    printf("\nHombres: %.2f%%", (H * 100.0) / T);
    printf("\nMujeres: %.2f%%\n", (M * 100.0) / T);
}

void F2(paciente A[], int T)
{
    int I, CON, CONT[6] = {0};

    for (I = 0; I < T; I++){
        CON = A[I].con;

        if (CON >= 1 && CON <= 5){
            CONT[CON]++;
        }
    }

    printf("\nPacientes por condicion de ingreso");

    for (I = 1; I <= 5; I++){
        printf("\nCondicion %d: %d paciente(s)", I, CONT[I]);
    }
    printf("\n");
}

void F3(paciente A[], int T){

    int I;
    printf("\nPacientes con condicion maxima (5)");

    for (I = 0; I < T; I++){
        if (A[I].con == 5){
            printf("\nNombre: %s", A[I].nom);
            printf("  Telefono: %s", A[I].tel);
        }
    }
    printf("\n");
}
