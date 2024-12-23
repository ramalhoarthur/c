#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um programa que receba um número.
Caso o número seja positivo, imprima sua raiz; caso contrário, imprima seu quadrado*/
int main()
{
    float num, raiz, quadrado;
    printf("Digite um numero:\n");
    scanf("%f", &num);
    if (num>0) {
        raiz = sqrt(num);
        printf("A raiz quadrada do numero eh %f", raiz);
    } else {
        quadrado = pow(num,2);
        printf("O quadrado do numero eh %f", quadrado);
        }
    return 0;
}
