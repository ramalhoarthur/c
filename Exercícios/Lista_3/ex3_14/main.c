#include <stdio.h>
#include <stdlib.h>
// Faça um programa que receba dois números e imprima o Mínimo Múltiplo Comum (MMC).
int main() {
    int num1, num2, i = 1, mmc;
    printf("Digite o primeiro numero inteiro positivo: ");
    scanf("%d", &num1);
    while (num1 <= 0) {
       printf("Digite o primeiro numero inteiro positivo: ");
        scanf("%d", &num1);
    }
    printf("Digite o segundo numero inteiro positivo: ");
    scanf("%d", &num2);
    while (num2 <= 0) {
        printf("Digite o segundo numero inteiro positivo: ");
        scanf("%d", &num2);
    }
    if (num1 == num2) mmc = num1;
    while (!(mmc % num1 == 0 && mmc % num2 == 0)) {
        mmc = num1 * i;
        i ++;
    }
    printf("O MMC de %d e %d eh %d.", num1, num2, mmc);
    /*do {
         mmc = i;
         i++;
    } while (mmc % num1 == 0 && mmc % num2 == 0);*/
    return 0;
}

