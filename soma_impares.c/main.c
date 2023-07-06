#include <stdio.h>

int main()
{
   int X, Y, soma, troca;

   printf("Digite dois numeros: ");
   scanf("%d", &X);
   scanf("%d", &Y);

   if (X > Y) {
        troca = X;
        X = Y;
        Y = troca;
   }

   soma = 0;
   for (int i = X+1; i < Y; i++) {

       if (i % 2 !=0) {
        soma = soma + i;
       }
   }

        printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}
