#include <stdio.h>
#include <stdlib.h>
#define N 3
int main()
{
    int matriz[N][N], media, soma, i, j;
    //receber cada elemento da matriz
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
           printf("Digite um numero para a %da linha e %da coluna: ", i+1, j+1);
           scanf("%d", &matriz[i][j]);
        }
    }
    //imprimir matriz original
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    //calcular soma
    soma = 0;
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            soma = soma + matriz[i][j];
        }
    }
    //imprimir media
    printf("Media dos elementos da matriz e: %d", soma/(N*N));

    return 0;
}
