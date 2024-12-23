#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um programa que receba um número e
imprima sua raiz quadrada, se possível. Caso não seja possível, apresente a mensagem “não é possível“.*/
int main()
{
    int a, raiz;
    printf("Digite um numero inteiro:");
    scanf("%d", &a);
    raiz = sqrt(a);
    if (pow(raiz,2)==a) {
    printf("%d", raiz);
    } else printf("Nao eh possivel");
    return 0;
}
