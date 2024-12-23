#include <stdio.h>
#include <stdlib.h>

int main()
{
    float av1, av2, projeto, media;
    printf("Informe sua nota na av1:");
    scanf("%f", &av1);
    printf("Informe sua nota na av2:");
    scanf("%f", &av2);
    printf("Informe sua nota no projeto:");
    scanf("%f", &projeto);
    media = (0.4 * av1) + (0.4 * av2) + (0.2 * projeto);
    printf("Sua media e %f", media);
    return 0;
}
