#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba um n�mero e imprima a mensagem: �� m�ltiplo de 3� ou �n�o � m�ltiplo de 3�.*/
int main()
{
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    if (num%3==0) {
        printf("Eh multiplo de 3.");
    } else {
        printf("Nao eh multiplo de 3.");
        }
    return 0;
}
