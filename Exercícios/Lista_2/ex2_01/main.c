#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba um número e imprima ele caso seja maior que 20.
*/
int main()
{
    float numero;
    printf("Digite um numero qualquer:");
    scanf("%f", &numero);
    if (numero > 20) {
        printf("O numero %f eh maior que 20.", numero);
    }
    else {
            if (numero < 20) {
            printf("O numero %f eh menor que 20.", numero);
            }
            else {
                printf("O numero %f eh igual que 20.", numero);
            }
    }
    return 0;
}
