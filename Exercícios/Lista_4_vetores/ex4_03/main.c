#include <stdio.h>
#include <stdlib.h>
#define N 3
/*
Faça um programa que receba dois vetores com N números, no qual cada número
do vetor deve conter apenas um dígito entre 0 e 9 (valide essa operação). Depois some os dois números e
gere um terceiro vetor com a soma. Exemplo: vet1 = [8, 2, 3] e vet2 = [3, 4, 9] geraria o vet3 = [1, 1, 7, 2].
*/
int main()
{
    int vet1[N], i, vet2[N], vet3[N+1], k, sobra=0, cont=0;
    //vetor 1:
    for(i=0; i<N; i++) {
        do {
            printf("Digite o %do numero: ", i+1);
            scanf("%d", &vet1[i]);
        } while(vet1[i]<0 || vet1[i]>9);
    }
    //imprimir vetor 1:
    for(i=0; i<N; i++) {
        printf("[%d] ", vet1[i]);
    }
    printf("\n\n");
    //vetor 2:
    for(i=0; i<N; i++) {
        do {
            printf("Digite o %do numero: ", i+1);
            scanf("%d", &vet2[i]);
        } while(vet2[i]<0 || vet2[i]>9);
    }
    //imprimir vetor 2:
    for(i=0; i<N; i++) {
        printf("[%d] ", vet2[i]);
    }
    printf("\n\n");

    //soma dos vetores e inversao do vet3
    for(k=0; k<N; k++) {

            vet3[k] = vet1[N-k] + vet2[N-k] + sobra;
            /*if (vet3[k]>9) {
                sobra = vet3[k]-10;
            }*/

    }

    //imprimir vetor 3:
    for(k=0; k<N; k++) {
        printf("[%d] ", vet3[k]);
    }
    return 0;
}
