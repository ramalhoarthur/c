#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba um número e imprima se ele é par ou ímpar.
*/
int main()
{
    int numero, resto;
    printf("Digite um numero:");
    scanf("%d", &numero);
    resto = numero % 2;
    if (resto == 1) {
        printf("O numero digitado eh impar.");
    }
    else {
        printf("O numero digitado eh par.");
    }
    return 0;
}
