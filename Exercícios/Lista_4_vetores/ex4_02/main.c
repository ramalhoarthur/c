#include <stdio.h>
#include <stdlib.h>
#define N 6
/*
Faça um programa que receba um vetor com N números. Depois, realize as seguintes operações na sequência:
a.
Imprima o vetor preenchido
b.
Digite um número x, se este número existir diga “o número <número> existe”
c.
Digite um número y, se este número não existir no vetor, substitua x por y
d.
Imprima novamente o vetor
*/
int main()
{
    //recebe N valores para o vetor:
    int vetor[N], i, x, y, cont=0;
    for(i=0; i<N; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    // imprime o vetor preenchido:
    for(i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    //existencia do x no vetor:
    printf("Digite um numero x: ");
    scanf("%d", &x);
    for(i=0; i<N; i++) {
        if(x==vetor[i]) {
            printf("O numero <%d> existe dentro do vetor de indice %d.\n", x, i);
        }
        else x = vetor[i];
    }

    //existencia do y no vetor:
    printf("Digite um numero y: ");
    scanf("%d", &y);
    for(i=0; i<N; i++) {
        if(y!=vetor[i]) {
            cont++;
        }
    }
    if(cont==N) {
        for(i=0; i<N; i++) {
        if(x==vetor[i]) {
            vetor[i] = y;
        }
    }
    }

    //imprimir novamente o vetor:
    for(i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
