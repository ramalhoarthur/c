#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba dois inteiros diferentes. Imprima na tela o maior e o menor n�mero.*/
int main()
{
    int a, b;
    printf("Digite dois numeros inteiros diferentes:\n");
    scanf("%d %d", &a, &b);
    if (a>b) {
        printf("%d > %d", a, b);
    } else {
        printf("%d > %d", b, a);
        }
    return 0;
}
