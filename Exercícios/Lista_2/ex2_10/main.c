#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba quatro números e imprima o maior e o menor número*/
int main()
{
    int a, b, c, d, maior, menor;
    printf("Digite 4 numeros inteiros:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>=b && a>=c && a>=d) {
        maior = a;
        printf("%d maior\n", maior);
    } else { if (b>=a && b>=c && b>=d) {
            maior = b;
            printf("%d maior\n", maior);
    } else { if (c>=a && c>=b && c>=d) {
            maior = c;
            printf("%d maior\n", maior);
    } else { if (d>=a && d>=c && d>=b) {
    }       maior = d;
            printf("%d maior\n", maior);
        }
        }
        }
    if (a<=b && a<=c && a<=d) {
        menor = a;
        printf("%d menor", menor);
    } else { if (b<=a && b<=c && b<=d) {
            menor = b;
            printf("%d menor", menor);
    } else { if (c<=a && c<=b && c<=d) {
            menor = c;
            printf("%d menor", menor);
    } else { if (d<=a && d<=c && d<=b) {
    }       menor = d;
            printf("%d menor", menor);
        }
        }
        }
    return 0;
    }


