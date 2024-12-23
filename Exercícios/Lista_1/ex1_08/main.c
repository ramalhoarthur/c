#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lado, area;
    printf("Informe a medida do lado do quadro em centimetros:");
    scanf("%d", &lado);
    area = pow(lado,2);
    printf("O dobro da area de um quadrado de lado %d e %d", lado, 2*area);
    return 0;
}
