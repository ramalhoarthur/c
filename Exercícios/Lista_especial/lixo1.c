#include <stdio.h>
#include <stdlib.h>

// Função para gerar matriz identidade de tamanho n
int** matrizIdentidade(int n) {
    int **matriz = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int*)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j){
              matriz[i][j] = 1;
            }
            else
              matriz[i][j] = 0;
        }
    }
    return matriz;
}

// Função para validar se todos os elementos da matriz são diferentes
int validaMatriz(int **A, int n) {
   int i, j, k, w;
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         for(k = i; k < n; k++){
             for(w = j; j < n; j++){
                 if(i == k && j == w)
                    continue;
                 if(A[i][j] == A[k][w])
                    return 0;
             }
         }
      }
   }
   return 1;
}

// Função para somar duas matrizes
int** somaMatrizes(int **A, int **B, int n) {
    int **C = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        C[i] = (int*)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j]; // Soma elemento por elemento
        }
    }
    return C;
}

// Função para encontrar o maior elemento da matriz
int maior(int **C, int n) {
    int max = C[0][0]; // Inicializa com o primeiro elemento
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (C[i][j] > max) {
                max = C[i][j];
            }
        }
    }
    return max;
}

// Função para imprimir a matriz
void imprimirMatriz(int **A, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

// Função principal
int main() {
    int n, i, j;

    // Leitura do tamanho da matriz
    printf("Digite o tamanho da matriz (n): ");
    scanf("%d", &n);

    // Criação da matriz A
    int **A = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        A[i] = (int*)malloc(n * sizeof(int));
    }

    // Preenchendo a matriz A e validando
    do{
     for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("\nDigite o valor da linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
     }
     if(validaMatriz(A, n) == 0)
        printf("\Tente de novo sem repetir");
   }while(validaMatriz(A, n) == 0);

    // Gera matriz identidade B
    int **B = matrizIdentidade(n);

    // Soma das matrizes A e B para formar C
    int **C = somaMatrizes(A, B, n);

    // Encontra o maior elemento da matriz C
    int maiorElemento = maior(C, n);

    // Imprime as matrizes
    printf("Matriz A:\n");
    imprimirMatriz(A, n);
    printf("Matriz B (Identidade):\n");
    imprimirMatriz(B, n);
    printf("Matriz C (A + B):\n");
    imprimirMatriz(C, n);
    printf("Maior elemento da matriz C: %d\n", maiorElemento);

    return 0;
}

