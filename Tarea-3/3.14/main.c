#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto;
    int votosCandidato1 = 0;
    int votosCandidato2 = 0;
    int votosCandidato3 = 0;
    int votosCandidato4 = 0;
    int votosCandidato5 = 0;
    int votosNulos = 0;
    int votosTotal = 0;

    float porcentaje1, porcentaje2, porcentaje3;
    float porcentaje4, porcentaje5, porcentajeNulos;

    printf("Ingrese el primer voto: ");
    scanf("%d", &voto);

    while (voto != 0)
    {
        switch (voto)
        {
            case 1:
                votosCandidato1++;
                break;
            case 2:
                votosCandidato2++;
                break;
            case 3:
                votosCandidato3++;
                break;
            case 4:
                votosCandidato4++;
                break;
            case 5:
                votosCandidato5++;
                break;
            default:
                votosNulos++;
                break;
        }

        printf("Ingrese el siguiente voto (0 para terminar): ");
        scanf("%d", &voto);
    }

    votosTotal = votosCandidato1 + votosCandidato2 + votosCandidato3 +
                 votosCandidato4 + votosCandidato5 + votosNulos;

    if (votosTotal > 0)
    {
        porcentaje1 = ((float)votosCandidato1 / votosTotal) * 100;
        porcentaje2 = ((float)votosCandidato2 / votosTotal) * 100;
        porcentaje3 = ((float)votosCandidato3 / votosTotal) * 100;
        porcentaje4 = ((float)votosCandidato4 / votosTotal) * 100;
        porcentaje5 = ((float)votosCandidato5 / votosTotal) * 100;
        porcentajeNulos = ((float)votosNulos / votosTotal) * 100;

        printf("\nTotal de votos: %d", votosTotal);
        printf("\nCandidato 1: %d votos -- %.2f%%", votosCandidato1, porcentaje1);
        printf("\nCandidato 2: %d votos -- %.2f%%", votosCandidato2, porcentaje2);
        printf("\nCandidato 3: %d votos -- %.2f%%", votosCandidato3, porcentaje3);
        printf("\nCandidato 4: %d votos -- %.2f%%", votosCandidato4, porcentaje4);
        printf("\nCandidato 5: %d votos -- %.2f%%", votosCandidato5, porcentaje5);
        printf("\nVotos nulos: %d votos -- %.2f%%", votosNulos, porcentajeNulos);
    }
    else{
        printf("No se ingresaron votos");
    }

    return 0;
}
