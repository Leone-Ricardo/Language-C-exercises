#include <stdio.h>

int main()
{
    int N, qteNegativos;

    printf("Qual e a ordem da matriz?");
    scanf("%d", &N);

    int mat [N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n ");
    for (int i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);

    }
    qteNegativos = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                qteNegativos++;


            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qteNegativos);


    return 0;

}
