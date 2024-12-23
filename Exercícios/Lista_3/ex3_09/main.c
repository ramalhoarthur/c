#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba um número inteiro. Verifique se esse número é primo ou não e imprima essa informação
int main()
{
    int num, cont=1, contdiv=0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    do {
        if ((num % cont) == 0) {
            contdiv = contdiv+1;
        }

        cont = cont+1;
    } while (cont<=num);
    if (contdiv == 2)
        printf("O numero %d eh primo.", num);
    else
        printf("O numero %d nao eh primo.", num);
    return 0;
}
