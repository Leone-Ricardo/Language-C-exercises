#include <stdio.h>

int main()
{
    int N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double soma, media, vet[N];

    for (int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES:\n ");
    for (int i = 0; i < N; i++ )
    {
        printf("%.1lf ", vet[i]);
    }
    printf("\n");

    soma = 0;
    for (int i = 0; i < N; i++) {
         soma = soma + vet[i];
    }

    printf("SOMA = %.2lf\n", soma);

    media = soma / N;

    printf("MEDIA = %.2lf\n", media);

    return 0;
}
