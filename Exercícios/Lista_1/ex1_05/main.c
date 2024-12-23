#include <stdio.h>
#include <stdlib.h>

int main()
{
    float av1, av2, av3, media;
    printf("Informe sua nota na av1:");
    scanf("%f", &av1);
    printf("Informe sua nota na av2:");
    scanf("%f", &av2);
    printf("Informe sua nota na av3:");
    scanf("%f", &av3);
    media = (av1+av2+av3)/3;
    printf("A media aritmetica das 3 avaliacoes e: %f", media);
    return 0;
}
