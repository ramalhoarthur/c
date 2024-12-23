#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba dois números.
Calcule a soma dos dois números. Caso a soma seja maior que 10, imprima o resultado da soma
*/
int main()
{
    float a, b, soma;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &a, &b);
    soma = a+b;
    if (soma>10.0) {
        printf("A soma dos dois numeros eh %f, logo a soma eh maior que 10.", soma);
    }
    else {
        printf("A soma eh menor ou igual que 10.");
    }
    return 0;
}
