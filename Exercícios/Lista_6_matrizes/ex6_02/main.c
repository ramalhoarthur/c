#include <stdio.h>
#include <stdlib.h>
#define N 3
int main()
{
    int matriz[N][N], matrizop[N][N], i, j;
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
    //multiplicar a matriz por k
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            matrizop[i][j] = (-1) * matriz[i][j];
        }
    }
    //imprimir matriz oposta
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("[%d]", matrizop[i][j]);
        }
        printf("\n");
    }

    return 0;
}
