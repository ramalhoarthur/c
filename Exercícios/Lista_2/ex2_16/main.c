#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que receba o valor de x e imprima o valor de f(x) com base na função abaixo:
/*
1 se x<=1
2 se 1<x<=2
x² se 2<x<=3
x³ se x>3
*/
int main()
{
    float x;
    printf("Digite um numero:");
    scanf("%f", &x);
    if (x<=1) {
        printf("1");
    } else { if (1<x && x<=2) {
        printf("2");
    } else { if (2<x && x<=3) {
        printf("%f", pow(x,2));
    } else printf("%f", pow(x,3));
    }
    }
    return 0;
}
