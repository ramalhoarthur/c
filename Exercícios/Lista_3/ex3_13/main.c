#include <stdio.h>
#include <stdlib.h>
// Faça um programa que receba dois números e imprima o Máximo Divisor Comum (MDC).
int main() {
    int num1, num2, mdc=1, i=2;
    //primeiro numero
    printf("Digite o primeiro numero inteiro positivo: ");
    scanf("%d", &num1);
    while (num1 <= 0) {
        printf("Digite o primeiro numero inteiro positivo: ");
        scanf("%d", &num1);
    }
    //segundo numero
    printf("Digite o segundo numero inteiro positivo: ");
    scanf("%d", &num2);
    while (num2 <= 0) {
        printf("Digite o segundo numero inteiro positivo: ");
        scanf("%d", &num2);
    }
    while (i <= num1) {
        if ((num1 % i)==0 && (num2 % i)==0) {
            mdc = i;
        }
        i++;
    }

    printf("O MDC de %d e %d eh %d.", num1, num2, mdc);
    return 0;
}
