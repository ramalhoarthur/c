#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que receba o sal�rio mensal atual de um funcion�rio
e o percentual de reajuste. Calcule e imprima o valor do novo sal�rio
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
