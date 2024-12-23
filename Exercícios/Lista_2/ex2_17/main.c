#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba um inteiro entre 1 e 7. Imprima o dia da semana correspondente
(1 sendo Domingo e 7 sendo Sábado).
Caso o número recebido não seja dentro do intervalo,
imprima que o dia da semana não existe.
*/
int main()
{
    int d;
    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%d", &d);
    switch (d) {
            case 1:     printf("Domingo");
                        break;
            case 2:     printf("Segunda");
                        break;
            case 3:     printf("Terça");
                        break;
            case 4:     printf("Quarta");
                        break;
            case 5:     printf("Quinta");
                        break;
            case 6:     printf("Sexta");
                        break;
            case 7:     printf("Sabado");
                        break;
            default:printf("Valor invalido.");
    }
    return 0;
}
