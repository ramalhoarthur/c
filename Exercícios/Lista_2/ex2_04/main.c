#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba um n�mero e imprima se ele � positivo, negativo ou nulo (zero).*/
int main()
{
    int a;
    printf("Digite um numero inteiro:");
    scanf("%d", &a);
    if (a>0) {
        printf("O numero eh positivo");
    }
    else {
        if (a<0) {
            printf("O numero eh negativo");
        }
        else {printf("O numero eh nulo");}
    }
    /*switch(a) {
        case (a>0):
            printf("O numero eh positivo");
            break;
        case (a<0):
            printf("O numero eh negativo");
            break;
        case (a==0):
            printf("O numero eh nulo");
            break;
    } */
    return 0;
}
