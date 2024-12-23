#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bruto, imposto, sindicato, liquido;
    printf("Informe seu salario:");
    scanf("%f", &bruto);
    imposto = 0.08*bruto;
    sindicato = 0.05*bruto;
    liquido = 0.87*bruto;
    printf("Seu salario bruto e R$%f, voce paga R$%f de imposto, R$%f de sindicato, e seu salario liquido e R$%f", bruto, imposto, sindicato, liquido);
    return 0;
}
