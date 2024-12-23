#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba um número e imprima a mensagem: “é múltiplo de 3” ou “não é múltiplo de 3”.*/
int main()
{
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    if (num%3==0) {
        printf("Eh multiplo de 3.");
    } else {
        printf("Nao eh multiplo de 3.");
        }
    return 0;
}
