#include <stdio.h>
#include <stdlib.h>
// Fa�a um programa que receba um inteiro, valide-o como n�o negativo. Depois, calcule e imprima o fatorial deste n�mero.
int main()
{
    int i, n, fat;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &i);
    n = i;
    fat = 1;
    while(n<0) {
        printf("Digite um numero inteiro nao negativo: ");
        scanf("%d", &i);
    }
    if (n==1) {
        fat = 1;
    }
    if (n==0) {
        fat = 1;
    }
    for (i=n ; n>=1; --n) {
        fat *= n;
    }
    printf("Fatorial de %d eh %d.", i, fat);
    return 0;
}
