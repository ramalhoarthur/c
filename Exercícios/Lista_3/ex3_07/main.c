#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, n, count = 0, i = 0;
    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &num2);
    printf("Digite a quantidade de multiplos: ");
    scanf("%d", &n);
    printf("Os primeiros %d numeros naturais que sao multiplos de %d ou %d sao:\n", n, num1, num2);
    while (count < n) {
        if (i % num1 == 0 || i % num2 == 0) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    return 0;
}
