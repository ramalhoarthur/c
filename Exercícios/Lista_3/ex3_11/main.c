#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, seg, qntd, cont=1, nant;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &qntd);
    seg = 0;
    while (cont<=qntd) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n != nant) {
            seg ++;
        }

        nant = n;
        cont ++;
    }
    printf("Quantidade de segmentos diferentes: %d", seg);
    return 0;
}

