#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba um n�mero n e imprima os n primeiros n�meros impares.*/
int main()
{
    int quantidade, contagem, numero;
    numero = 1;
    contagem = 1;
    printf("Digite um numero: ");
    scanf("%d", &quantidade);
    while (contagem <= quantidade) {
        printf("%d ", numero);
        numero = numero+2;
        contagem = contagem+1;
    }
    return 0;
}
