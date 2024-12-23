#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba um número inteiro e diga se ele é triangular ou não.
Um número natural é triangular se ele é produto de três números naturais consecutivos.
Exemplo: 120 é triangular, pois 4x5x6 = 120.*/
int main() {
    int num, i, triangular = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (i = 1; i * (i + 1) * (i + 2) <= num; i++) {
        if (i * (i + 1) * (i + 2) == num) {
            triangular = 1;
            break;
        }
    }

    if (triangular) {
        printf("%d é um número triangular.\n", num);
    } else {
        printf("%d não é um número triangular.\n", num);
    }

    return 0;
}
