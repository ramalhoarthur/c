#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que receba um n�mero e imprima se ele � par ou �mpar.
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
