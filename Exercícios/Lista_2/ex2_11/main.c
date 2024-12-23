#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba três números e imprima-os em ordem crescente.
int main()
{
    int a, b, c, maior, meio, menor;
    printf("Digite 3 numeros inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c && b>=c) {
        maior = a;
        meio = b;
        menor = c;
        printf("%d, %d, %d", menor, meio, maior);
    } else { if (a>=b && a>=c && c>=b) {
        maior = a;
        meio = c;
        menor = b;
        printf("%d, %d, %d", menor, meio, maior);
    } else { if (b>=a && b>=c && a>=c) {
        maior = b;
        meio = a;
        menor = c;
        printf("%d, %d, %d", menor, meio, maior);
    } else { if (b>=a && b>=c && c>=a) {
        maior = b;
        meio = c;
        menor = a;
        printf("%d, %d, %d", menor, meio, maior);
    } else { if (c>=a && c>=b && a>=b) {
        maior = c;
        meio = a;
        menor = b;
        printf("%d, %d, %d", menor, meio, maior);
    } else { if (c>=a && c>=b && b>=a) {
        maior = c;
        meio = b;
        menor = a;
        printf("%d, %d, %d", menor, meio, maior);
    }
    }
    }
    }
    }
    }
    return 0;
}
