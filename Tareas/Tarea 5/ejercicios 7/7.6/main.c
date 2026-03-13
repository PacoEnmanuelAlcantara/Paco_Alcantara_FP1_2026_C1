#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     char cad0[50] = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    /* strcpy */
    strcpy(cad1, cad0);
    printf("\nstrcpy cad0 -> cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nstrcpy cad3 -> cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nstrcpy \"XX\" -> cad1: %s\n", cad1);

    /* strncpy */
    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\nstrncpy 4 chars cad0 -> cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nstrncpy 3 chars cad3 -> cad2: %s\n", cad2);

    /* strcat */
    strcat(cad0, cad3);
    printf("\nstrcat cad3 a cad0: %s\n", cad0);

    strcat(cad1, " YY");
    printf("\nstrcat \" YY\" a cad1: %s\n", cad1);

    /* strncat */
    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("\nstrncat 4 chars cad0 a cad2: %s\n", cad2);

    /* strstr */
    char *ptr;

    ptr = strstr(cad0, "Mexico");
    printf("\nBuscar \"Mexico\" en cad0: %s\n", ptr);

    ptr = strstr(cad0, "Guatemala");
    printf("\nBuscar \"Guatemala\" en cad0: %s\n", ptr);
    return 0;
}
