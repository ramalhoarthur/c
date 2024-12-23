#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba um número a e um número b.
Verifique se a é divisível por b ou não e imprima na tela essa informação.*/
int main()
{
    int a, b;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &a, &b);
    if (a%b==0) {
        printf("'a' eh divisivel por 'b'.");
    } else {
        printf("'a' nao eh divisivel por 'b'.");
        }
    return 0;
}
