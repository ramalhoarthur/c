#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int in1, in2;
    float real, i, ii, iii;
    printf("Informe um numero inteiro:");
    scanf("%d", &in1);
    printf("Informe mais um numero inteiro:");
    scanf("%d", &in2);
    printf("Informe um numero real:");
    scanf("%f", &real);
    i = (2*in1) *  (in2/2.0);
    printf("i)= %f\n", i);
    ii = (3.0*in1)+real;
    printf("ii)= %f\n", ii);
    iii = pow(real,3);
    printf("iii)= %f\n", iii);
    return 0;
}
