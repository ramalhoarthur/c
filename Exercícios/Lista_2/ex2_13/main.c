#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba um número e imprima apenas “é válido” ou “não é válido”
caos ele satisfaça pelo menos uma das condições:
ser igual a 5, ser igual a 200, estar entre 10 e 100, estar entre 250 e 500.*/
int main()
{
    int numero;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);
    if ((numero==5) || (numero==200) || (10<=numero && numero<=100) || (250<=numero && numero<=500)) {
        printf("Eh valido");
    } else printf("Nao eh valido");
    return 0;
}
