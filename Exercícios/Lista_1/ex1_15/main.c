#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que receba o n�mero total de eleitores de um munic�pio, n�mero de votos brancos, nulos e v�lidos.
Calcule e imprima o percentual que cada um representa em rela��o ao total de eleitores
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
