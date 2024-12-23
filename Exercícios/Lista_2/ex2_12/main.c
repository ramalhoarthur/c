#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba um inteiro e imprima se ele se encontra entre 20 e 90 ou não.
int main()
{
    int a;
    printf("Digite um numero inteiro\n");
    scanf("%d", &a);
    if (20<=a && a<=90) {
        printf("O numeros se encontra entre 20 e 90.");
    } else { printf("O numero nao se encontra entre 20 e 90");
    }
    return 0;
}
