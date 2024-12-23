#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio, area;
    printf("Informe o raio do circulo:");
    scanf("%f", &raio);
    area = 3.14*(pow(raio, 2));
    printf("A area do circulo de raio %f e aproximadamente: %f", raio, area);
    return 0;
}
