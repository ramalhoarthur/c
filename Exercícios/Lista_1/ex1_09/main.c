#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariohora, horas, mensal;
    printf("Quanto voce ganha por hora?");
    scanf("%f", &salariohora);
    printf("Quantas horas voce trabalhou no mes?");
    scanf("%f", &horas);
    mensal = salariohora*horas;
    printf("Nesse mes, seu salario foi de %f", mensal);
    return 0;
}
