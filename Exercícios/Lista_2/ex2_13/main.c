#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba um n�mero e imprima apenas �� v�lido� ou �n�o � v�lido�
caos ele satisfa�a pelo menos uma das condi��es:
ser igual a 5, ser igual a 200, estar entre 10 e 100, estar entre 250 e 500.*/
int main()
{
    int numero;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);
    if ((numero==5) || (numero==200) || (10<=numero && numero<=100) || (250<=numero && numero<=500)) {
        printf("Eh valido");
    } else printf("Nao eh valido");
    return 0;
}
