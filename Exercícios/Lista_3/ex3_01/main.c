#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que receba um n�mero n e imprima os n primeiros inteiros positivos.
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
