#include <stdio.h>

int main(){
        int M, N , j, i;

        printf("Quantas linhas vai ter a matriz? ");
        scanf("%d", &M);
        printf("Quantas colunas vai ter a matriz? ");
        scanf("%d", &N);

        int mat[M][N];

        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                printf("Elemento [%d,%d]: ", i, j);
                scanf("%d", &mat[i] [j]);
            }


        }

        printf("\nMatriz digitada:\n");
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                printf("%d ", mat[i][j]);
            }
               printf("\n");
        }

    return 0;
}


