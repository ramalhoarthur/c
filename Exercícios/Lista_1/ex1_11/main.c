#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, imc;
    printf("Informe sua altura em metros:");
    scanf("%f", &altura);
    imc = (72.7 * altura) - 58;
    printf("Seu peso ideal e %f", imc);
    return 0;
}
