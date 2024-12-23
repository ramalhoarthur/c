#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que pergunte a quantidade de quilômetros percorridos
por um carro alugado e a quantidade de
dias do aluguel. Calcule o preço do aluguel,
levando em consideração que o aluguel do carro custa R$ 60,00
por dia e R$ 0,15 por quilometro rodado.
*/
int main()
{
    float km, preco;
    int dias;
    printf("Quantidade de Km percorridos:");
    scanf("%f", &km);
    printf("Quantidade de dias de aluguel:");
    scanf("%d", &dias);
    preco = (km*0.15) + (dias*60);
    printf("Preco do aluguel: %f", preco);
    return 0;
}
