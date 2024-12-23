#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba um número n e some os números pares de 0 até o número digitado
*/
int main()
{
    int n, soma, numero;
    soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (numero = 0; numero <= n; numero+=2) {
            soma = soma + numero;

    }
    printf("Soma: %d", soma);
    return 0;
}
