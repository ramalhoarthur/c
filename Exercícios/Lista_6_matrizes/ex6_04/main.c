#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][2], i, j, det;
    //ler os elementos da matriz
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
        printf("Digite o elemento da %da linha %da coluna da matriz 2x2: ", i+1, j+1);
        scanf("%d", &mat[i][j]);
        }
    }
    //calculo do determinante
    det = (mat[0][0]*mat[1][1]) - (mat[0][1]*mat[1][0]);
    printf("Determinante da matriz dada: %d", det);


    return 0;
}
