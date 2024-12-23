#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba a idade de uma pessoa e
imprima sua classe eleitoral (facultativo, obrigatório ou não-eleitor).
*/
int main()
{
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    if (18<=idade && idade<=70) {
        printf("Voto obrigatorio.");
    } else { if (idade==16 || idade==17 || 70<idade) {
    printf("Voto facultativo.");
    } else printf("Nao-eleitor.");
    }
    return 0;
}
