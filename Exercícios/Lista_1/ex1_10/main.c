#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, reserva;
    printf("Digite um valor inteiro para A:");
    scanf("%d", &A);
    printf("Digite um valor inteiro para B:");
    scanf("%d", &B);
    reserva = A;
    A = B;
    B = reserva;
    printf("O novo valor da variavel A e %d e o novo valor da variavel B e %d", A, B);
    return 0;
}
