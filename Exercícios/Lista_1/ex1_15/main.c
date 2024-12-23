#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba o número total de eleitores de um município, número de votos brancos, nulos e válidos.
Calcule e imprima o percentual que cada um representa em relação ao total de eleitores
*/
int main()
{
    int total, brancos, nulos, validos;
    float bt, nt, vt;

    printf("Votos validos:");
    scanf("%d", &validos);

    printf("Total de votos brancos:");
    scanf("%d", &brancos);

    printf("Total de votos nulos:");
    scanf("%d", &nulos);

    total = validos+brancos+nulos;
    printf("Total de votos: %d \n", total);

    bt = ((float)brancos/(float)total) * 100.00;
    nt = ((float)nulos/(float)total) * 100.00;
    vt = ((float)validos/(float)total) * 100.00;
    printf("Percentual de votos branco: %f. Percentual de votos nulos: %f. Percemtual de votos validos: %f", bt, nt, vt);
    return 0;
}
