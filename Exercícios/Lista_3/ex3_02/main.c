#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Fa�a um programa que receba um n�mero inteiro por vez e imprima seu quadrado at� que o usu�rio digite o valor zero.
*/
int main()
{
    int numero, quadrado;
    printf("Digite um numero inteiro exceto o 0: ");
    scanf("%d", &numero);
    quadrado = pow(numero,2);
    printf("%d\n", quadrado);
    while (numero != 0) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        quadrado = pow(numero,2);
        printf("%d\n", quadrado);
    }
    printf("Numero invalido.");
    return 0;
}
