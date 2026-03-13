#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Estructura alumno */
struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

/* Limpia buffer */
void limpiarBuffer(void)
{
    int caracter;
    while ((caracter = getchar()) != '\n' && caracter != EOF);
}

void main(void)
{
    /* Alumno 1 inicializado, 2 y 3 vacíos */
    struct alumno a1 = {120, "Maria", "Contabilidad", 8.9, "Querétaro"}, a2, a3;

    char nom[20], car[20], dir[20];
    int mat;
    float pro;

    /* Lectura alumno 2 */
    printf("\nIngrese la matricula del alumno 2: ");
    scanf("%d", &a2.matricula);
    limpiarBuffer();

    printf("Ingrese el nombre del alumno 2: ");
    gets(a2.nombre);

    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    limpiarBuffer();

    printf("Ingrese la direccion del alumno 2: ");
    gets(a2.direccion);

    /* Lectura alumno 3 con variables auxiliares */
    printf("\nIngrese la matricula del alumno 3: ");
    scanf("%d", &mat);
    a3.matricula = mat;
    limpiarBuffer();

    printf("Ingrese el nombre del alumno 3: ");
    gets(nom);
    strcpy(a3.nombre, nom);

    printf("Ingrese la carrera del alumno 3: ");
    gets(car);
    strcpy(a3.carrera, car);

    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.promedio = pro;
    limpiarBuffer();

    printf("Ingrese la direccion del alumno 3: ");
    gets(dir);
    strcpy(a3.direccion, dir);

    /* Mostrar alumno 1 */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);

    /* Mostrar alumno 2 */
    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);

    /* Mostrar alumno 3 */
    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s",
           a3.matricula,
           a3.nombre,
           a3.carrera,
           a3.promedio,
           a3.direccion);
}
