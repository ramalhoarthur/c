#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba um n�mero inteiro e diga se ele � triangular ou n�o.
Um n�mero natural � triangular se ele � produto de tr�s n�meros naturais consecutivos.
Exemplo: 120 � triangular, pois 4x5x6 = 120.*/
int main() {
    int num, i, triangular = 0;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    for (i = 1; i * (i + 1) * (i + 2) <= num; i++) {
        if (i * (i + 1) * (i + 2) == num) {
            triangular = 1;
            break;
        }
    }

    if (triangular) {
        printf("%d � um n�mero triangular.\n", num);
    } else {
        printf("%d n�o � um n�mero triangular.\n", num);
    }

    return 0;
}
