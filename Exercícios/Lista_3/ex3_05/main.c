#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que receba um n�mero n e some os n�meros pares de 0 at� o n�mero digitado
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
