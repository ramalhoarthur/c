#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que receba um valor inteiro n, crie uma matriz A de tamanho n x n
dinamicamente. Preencha a matriz A e valide-a (repita o preenchimento, caso não
atenta ao requisito estabelecido a seguir) para que ela possua todos os elementos
diferentes. Após validada a matriz A, gere uma matriz identidade B de tamanho n x n.
Some a matriz A com a matriz B, gerando a matriz C. Encontre o maior elemento da
matriz C. Ao final, imprima as matrizes A, B e C. Você precisará elaborar as seguintes
funções:
a. main() <- fazendo tudo que foi solicitado na questão, com o auxílio das
funções abaixo;
b. int **matrizIdentidade(int n) <- gera matriz identidade de tamanho n;
c. int validaMatriz(int **A, int n) <- retorna 0 (tem alguém repetido) ou 1 (tudo
diferente) de acordo com a matriz A de tamanho n;
d. int **somaMatrizes(int **A, int **B, int n) <- soma matriz A e B (elemento por
elemento) gerando a matriz de retorno, todas de tamanho n; (2,0 pt)
e. int maior(int **C, int n) <- retorna o maior elemento da matriz C de tamanho
n;
f. void imprimirMatriz(int **A, int n) <- imprime a matriz A de tamanho n.
*/
int **matrizIdentidade (int n) {
    int i, j;
    int **matId = (int**)malloc(n * sizeof(int*));
    for(i=0; i<n; i++)
        matId[i] = (int*)malloc(n * sizeof(int));
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i==j)
                matId[i][j] = 1;
            else
                matId[i][j] = 0;
    return matId;
}

int validaMatriz (int **A, int n) {
    int i, j, i2, j2;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            for(i2=i; i2<n; i2++)
                for(j2=j; j2<n; j2++) {
                    if(i2==i && j2==j)
                        continue;
                    if(A[i2][j2]==A[i][j])
                        return 0;
                }
    return 1;
}


int **somaMatrizes(int **A, int **B, int n) {
    int i, j;
    int **C = (int**)malloc(n * sizeof(int*));
    for(i=0; i<n; i++)
        C[i] = (int*)malloc(n* sizeof(int));
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

int maior(int **C, int n) {
    int i, j, maior;
    maior = C[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(C[i][j] > maior)
                maior = C[i][j];
    return maior;
}


void imprimirMatriz(int **A, int n) {
    int i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("[%d]\t", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j, n, maior;


    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);


    int **A = (int**)malloc(n * sizeof(int*));
    for(i=0; i<n; i++)
        A[i] = (int*)malloc(n * sizeof(int));


    do {
        for(i=0; i<n; i++)
            for(j=0; j<n; j++) {
                printf("Digite o elemento da %da linha %da coluna: ", i+1, j+1);
                scanf("%d", &A[i][j]);
            }
            if(validaMatriz(A,n)==0)
                    printf("Elemento repetido, tente novamente.\n");
    }while(validaMatriz(A,n)==0);


    printf("Matriz A:\n");
    imprimirMatriz(A, n);
    printf("\n");


    int **matrizId = matrizIdentidade(n);
    printf("Matriz Identidade:\n");
    imprimirMatriz(matrizId, n);
    printf("\n");


    int **C = somaMatrizes(A, matrizId, n);
    printf("Matriz C:\n");
    imprimirMatriz(C, n);
    printf("\n");

    printf("Maior elemento de C: %d", maior);

    return 0;
}
