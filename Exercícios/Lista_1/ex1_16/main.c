#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba o salário mensal atual de um funcionário
e o percentual de reajuste. Calcule e imprima o valor do novo salário
*/
int main()
{
    float salario, reajuste, novosalario;
    printf("Informe seu salario:");
    scanf("%f", &salario);
    printf("Informe o reajuste:");
    scanf("%f", &reajuste);
    novosalario = salario + ((reajuste/100)*salario);
    printf("Seu novo salario e %f", novosalario);
    return 0;
}
