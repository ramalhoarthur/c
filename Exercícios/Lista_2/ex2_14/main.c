#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Fa�a um programa que receba um n�mero e
imprima sua raiz quadrada, se poss�vel. Caso n�o seja poss�vel, apresente a mensagem �n�o � poss�vel�.*/
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
