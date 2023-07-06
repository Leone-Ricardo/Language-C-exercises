#include <stdio.h>


int main()
{
   double nota1, nota2, NotaFinal;

   printf("Digite a primeira nota: ");
   scanf("%lf", &nota1);
   printf("Digite a segunda nota: ");
   scanf("%lf", &nota2);

   NotaFinal = nota1 + nota2;

   printf("Nota final = %.1lf\n", NotaFinal);

   if( NotaFinal < 60.0) {
           printf("REPROVADO!\n");

   }

    return 0;
}
