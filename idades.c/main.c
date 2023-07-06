#include <stdio.h>

int main()
{
    char Nome1 [50], Nome2 [50];
    int Idade1, Idade2;
    double media;

    printf("DADOS DA PRIMEIRA PESSOA:\n");
    printf("Nome: ");
    gets(Nome1);
    printf("Idade: ");
    scanf("%d", &Idade1);

    printf("DADOS DA SEGUNDA PESSOA:\n ");
    printf("Nome: ");
    fseek (stdin, 0, SEEK_END);
    gets (Nome2);
    printf("Idade: ");
    scanf("%d", &Idade2);

    media = (Idade1 + Idade2) / 2 ;

    printf("A idade media entre %s e %s eh de %.1lf anos ", Nome1, Nome2, media);


        return 0;
}

 gets(garante que o numero de char é inferior ao requisitado na variavel); e fseek(limpar entrada);
