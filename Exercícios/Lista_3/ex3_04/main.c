#include <stdio.h>
#include <stdlib.h>
// Faça um programa que receba um número n. Receba a nota de n alunos. Ao final do programa imprima a maior e a menor nota.
int main()
{
    int contagem, quantidade;
    float maior, menor, nota;
    contagem = 1;
    //maior = 0.0; menor = 10.0;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);
    while (contagem <= quantidade) {
        printf("Digite a nota do %do aluno: ", contagem);
        scanf("%f", &nota);
        if(contagem == 1) {
            maior = nota;
            menor = nota;
        }
        else {
        if (nota > maior) {
            maior = nota;
        }
        if (nota < menor) {
            menor = nota;
        }
        }
        contagem ++;
    }
    printf("Maior nota: %f.\n", maior);
    printf("Menor nota: %f.", menor);
    return 0;
}
