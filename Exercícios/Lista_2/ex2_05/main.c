#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba dois números e efetue a soma deles.
Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8;
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/
int main()
{
    float n1, n2, soma;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &n1, &n2);
    soma = n1+n2;

    if (n1+n2>20.0) {
        soma = soma+8.0;
        printf("Numero final: %f", soma);
    } else {
        soma = soma-5.0;
        printf("Resultado final: %f.", soma);
        }
    return 0;
}
