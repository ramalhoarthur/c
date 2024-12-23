#include <stdio.h>
#include <stdlib.h>
#define N 3
/*
Faça um programa que receba dois vetores com N números, no qual cada vetor tem
seus valores em ordem crescente
(não precisa validar) e depois gere um terceiro vetor ordenado
com os números dos dois vetores. Exemplo: vet1 = [1, 2, 3] e vet2 = [2, 4, 5]
resultaria em [1, 2, 2, 3, 4, 5].
*/
int main()
{
    int vet1[N], vet2[N], i, j, k, vet3[2*N];
    printf("Digite os numeros em ordem crescente!\n");
    //vetor 1:
    for(i=0; i<N; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vet1[i]);
    }
    for(i=0; i<N; i++) {
        printf("[%d] ", vet1[i]);
    }
    printf("\n\n");

    //vetor 2:
    for(j=0; j<N; j++) {
        printf("Digite o %do numero: ", j+1);
        scanf("%d", &vet2[j]);
    }
    for(j=0; j<N; j++) {
        printf("[%d] ", vet2[j]);
    }
    printf("\n\n");

    //vetor 3:
    i = 0;
    j = 0;
    for(k=0; k<2*N; k++) {
       /* if(k==(2*N)-1) {
            if(vet1[N-1]<=vet2[N-1]) vet3[k] = vet1[N-1];
            else vet3[k] = vet2[N-1];
        } */
        if(vet1[i]<=vet2[j]) {
            vet3[k] = vet1[i];
            i++;
        }
        else {
            vet3[k] = vet2[j];
            j++;
        }
        printf("[%d]\n", vet3[k]);


    }


    for(k=0; k<2*N; k++) {
        printf("[%d] ", vet3[k]);
    }
    return 0;
}
