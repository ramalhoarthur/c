#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba um número n e imprima os n primeiros inteiros positivos.
*/
int main()
{
    int n, numero;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    numero = 1;
    while (numero <= n) {
        printf("%d ", numero);
        numero ++;
    }
    return 0;
}
