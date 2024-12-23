#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma;
    printf("Escreva um numero inteiro:");
    scanf("%d", &a);
    printf("Escreva mais um numero inteiro:");
    scanf("%d", &b);
    soma = a + b;
    printf("A soma entre %d e %d resulta em %d", a, b, soma);
    return 0;
}
