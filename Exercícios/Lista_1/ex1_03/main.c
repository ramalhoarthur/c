#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, antecessor;
    printf("Informe um numero:");
    scanf("%d", &numero);
    antecessor = numero-1;
    printf("O antecessor do numero %d e %d", numero, antecessor);
    return 0;
}
