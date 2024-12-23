#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba uma quantidade de dias, horas, minutos e segundos.
Calcule e imprima o total em segundos.
*/
int main()
{
    int dias, horas, minutos, segundos, total;
    printf("Informe uma quantidade de dias:");
    scanf("%d", &dias);
    printf("Informe uma quantidade de horas:");
    scanf("%d", &horas);
    printf("Informe uma quantidade de minutos:");
    scanf("%d", &minutos);
    printf("Informe uma quantidade de segundos:");
    scanf("%d", &segundos);
    total = (dias*86400) + (horas*3600) + (minutos*60) + segundos;
    printf("Total de segundos de acordo com a quantidade dada e: %d", total);
    return 0;
}
