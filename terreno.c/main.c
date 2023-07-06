#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf",&base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt (pow (base, 2.0) + pow(altura, 2.0));

    printf("AREA = %.4lf\n", area);

    printf("PERIMETRO = %.4lf\n", perimetro);

    printf("DIAGONAL = %.4lf\n ", diagonal);

    return 0;
}


comentario: funcao sqrt(raiz quadrada). pow (elevar ao quadrado);
