#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que receba a quantidade de discos vendidos em uma loja durante cada dia do m�s de Abril.
Imprima qual o dia que ocorreu a maior venda do m�s e qual foi a quantidade de discos vendidos.
*/
int main()
{
    int quantd, maior=0, soma=0, dias=1;
    printf("Quantd. de discos vendidos no %do dia: ", dias);
    scanf("%d", &quantd);
    dias++;
    soma = soma + quantd;
    if (quantd > maior) {
        maior = quantd;
    }
    while (dias<=30) {
        printf("Quantd. de discos vendidos no %do dia: ", dias);
        scanf("%d", &quantd);
        dias++;
        soma = soma + quantd;
        if (quantd > maior) {
        maior = quantd;
        }
    }
    printf("Total de discos vendidos: %d\n", soma);
    printf("Maior venda do mes: %d", maior);
    return 0;
}
