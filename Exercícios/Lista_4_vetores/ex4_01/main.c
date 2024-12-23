#include <stdio.h>
#include <stdlib.h>
#define N 6
/*
Faça um programa que receba um vetor com N números.
Supondo que o vetor digitado foi [1, 2, 3, 4], imprima-o da seguinte maneira: (1) (2) (3) (4).
*/
int main()
{
    int numeros[N], i;
    for (i=0; i<N; i++) {
        printf("Digite o %do numero!\n", i+1);
        scanf("%d", &numeros[i]);
    }
    for (i=0; i<N; i++) {
        printf("(%d) ", numeros[i]);
    }
    return 0;
}
