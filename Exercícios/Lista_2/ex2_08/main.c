#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba um n�mero a e um n�mero b.
Verifique se a � divis�vel por b ou n�o e imprima na tela essa informa��o.*/
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
