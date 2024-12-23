#include <stdio.h>
#include <stdlib.h>

int main()
{
    float met, cem;
    printf("Informe a medicao em metros:");
    scanf("%f", &met);
    cem = met*100;
    printf("A conversao de metros para centimetros e %f", cem);
    return 0;
}
