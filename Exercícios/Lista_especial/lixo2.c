#include <stdlib.h>
#include <stdio.h>

int maior(int *V, int n){
   int i, maior;
   maior = V[0];
   for(i = 1; i < n; i++){
      if(V[i] > maior){
        maior = V[i];
      }
   }
   return maior;
}

int pos(int **A, int n, int x, int *linha){
   int i, j;
   for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(A[i][j] == x){
              *linha = i;
              return 1;
            }
        }
    }
   return 0;
}

int main(){
   int n, *vet, **mat, i, j, x, linha;
   printf("Digite o tamanho N: ");
   scanf("%d", &n);
   vet = (int*)malloc(n * sizeof(int));
   mat = (int**)malloc(n * sizeof(int*));
   for(i = 0; i < n; i++){
      mat[i] = (int*)malloc(n * sizeof(int));
   }

   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         printf("Digite o valor da linha %d coluna %d: ", i+1, j+1);
         scanf("%d", &mat[i][j]);
      }
   }
   printf("\nDigite um valor que voce deseja encontrar na matriz: ");
   scanf("%d", &x);

   if(pos(mat, n, x, &linha) == 0)
     printf("\nNumero inexistente");

   else{
       for (int j = 0; j < n; j++){
           vet[j] = mat[linha][j];
       }

       printf("\O maior elemento da linha %d eh %d", linha + 1, maior(vet, n));
   }
   return 0;
}
