#include <iostream>
#include <iomanip> //serve para formatar o número de casas decimais.
#include <string>  // serve como uma função para manipulação de texto.
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;

int main()
{















//    int N, cont;
//    double media,soma, percentual;
//
//    cout << "Quantas pessoas serao digitadas? ";
//    cin >> N;
//
//    string nomes[N];
//    int idades[N];
//    double alturas[N];
//
//    for (int i = 0; i < N; i++) {
//        cout << "Dados da " << i+1 << "a pessoa: " << endl;
//        cout << "Nome: ";
//        cin.ignore(INT_MAX, '\n');
//        getline(cin, nomes[i]);
//        cout << "Idade: ";
//        cin >> idades[i];
//        cout << "Altura: ";
//        cin >> alturas[i];
//    }
//
//    soma = 0;
//    for (int i = 0; i < N; i++) {
//        soma = soma + alturas[i];
//    }
//    media = soma / N;
//
//    cout << fixed << setprecision(2);
//    cout << "Altura media: " << media << endl;
//
//    cont = 0;
//    for (int i = 0; i < N; i ++){
//        if (idades[i] < 16) {
//            cont++;
//        }
//    }
//    percentual = (double)cont * 100.0 / N;
//    cout << fixed << setprecision(1);
//    cout << "Pessoas com menos de 16 anos: " << percentual << "%" << endl;
//
//    for (int i = 0; i < N; i++) {
//        if (idades[i] < 16) {
//            cout << nomes[i] << endl;
//        }
//    }




//    int x, y, troca, soma;
//
//    cout << "Digite dois numeros: " << endl;
//    cin >> x >> y;
//
//    if (x > y) {
//        troca = x;
//        x = y;
//        y = troca;
//    }
//
//    soma = 0;
//    for (int i = x+1; i < y; i++) {
//        if (i % 2 != 0) {
//            soma = soma + i;
//        }
//    }
//
//    cout << "SOMA DOS IMPARES = " << soma << endl;








//    int x, y;
//
//    cout << "Digite dois numeros: ";
//    cin >> x >> y;
//
//    while (x != y){
//        if (x < y){
//            cout << "CRESCENTE" << endl;
//        }
//        else {
//            cout << "DECRESCENTE" << endl;
//        }
//         cout << "Digite outros dois numeros: " << endl;
//    cin >> x >> y;
//
//    }






//    int a, b, c, menor;
//
//    cout << "Pimeiro valor: ";
//    cin >> a;
//    cout << "Segundo valor: ";
//    cin >> b;
//    cout << "Terceiro valor: ";
//    cin >> c;
//
//    if (a < b && a < c ) {
//        menor = a;
//    }
//    else if (b < c) {
//        menor = b;
//    }
//    else {
//        menor = c;
//    }
//
//    cout << "O menor valor entre os 3 eh: " << menor << endl;





//    string nome1, nome2;
//    int idade1, idade2;
//    double media;
//
//
//    cout << "Dados da primeira pessoa: " << endl;
//    cout << "Nome: ";
//    getline(cin, nome1);
//    cout << "Idade: ";
//    cin >> idade1;
//
//    cout << "Dados da segunda pessoa: " << endl;
//    cout << "Nome: ";
//    cin.ignore(INT_MAX, '\n');
//    getline(cin, nome2);
//    cout << "Idade: ";
//    cin >> idade2;
//
//    media = (double)(idade1 + idade2) / 2;
//    cout << fixed << setprecision(1);
//
//    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media << " anos! " << endl;






//    double b, h, area, perimetro, diagonal;
//
//    cout << "Base do retangulo: ";
//    cin >> b;
//    cout << "Altura do retangulo: ";
//    cin >> h;
//
//    area = b * h;
//    perimetro = 2 * (b + h);
//    diagonal = sqrt (pow(b, 2.0) + pow(h, 2.0));
//
//    cout << fixed << setprecision (4);
//    cout <<"AREA = " << area << endl;
//    cout << "PERIMETRO = " << perimetro <<endl;
//    cout << "DIAGONAL = " << diagonal << endl;







//    int M, N, i, j;
//     cout << "Quantas linhas vai ter a matriz? ";
//     cin >> M;
//     cout << "Quantas colunas vai ter a matriz? ";
//     cin >> N;
//     int mat[M][N];
//     for (i = 0; i < M; i++) {
//     for (j = 0; j < N; j++) {
//     cout << "Elemento [" << i << "," << j << "]: ";
//     cin >> mat[i][j];
//     }
//     }
//     cout << endl << "MATRIZ DIGITADA:" << endl;
//     for (i = 0; i < M; i++) {
//     for (j = 0; j < N; j++) {
//     cout << mat[i][j] << " ";
//     }
//     cout << endl;
//     }







//    int N, i;
//     cout << "Quantos numeros voce vai digitar? ";
//     cin >> N;
//     double vet[N];
//     for (i = 0; i < N; i++) {
//     cout << "Digite um numero: ";
//     cin >> vet[i];
//     }
//     cout << endl << "NUMEROS DIGITADOS:" << endl;
//     cout << fixed << setprecision(1);
//     for (i = 0; i < N; i++) {
//     cout << vet[i] << endl;
// }





//    int N, i, x, soma;
//     cout << "Quantos numeros serao digitados? ";
//     cin >> N;
//     soma = 0;
//     for (i = 1; i <= N; i++) {
//     cout << "Digite um numero: ";
//     cin >> x;
//     soma = soma + x;
//     }
//     cout << "SOMA = " << soma << endl;







//    int M, N, i, j;
//    cout << "Quantas linhas vai ter a matriz? ";
//    cin >> M;
//    cout << "Quantas colunas vai ter a matriz? ";
//    cin >> N;
//    int mat[M][N];
//    for (i = 0; i < M; i++) {
//    for (j = 0; j < N; j++) {
//    cout << "Elemento [" << i << "," << j << "]: ";
//    cin >> mat[i][j];
//    }
//    }
//    cout << endl << "MATRIZ DIGITADA:" << endl;
//    for (i = 0; i < M; i++) {
//    for (j = 0; j < N; j++) {
//    cout << mat[i][j] << " ";
//    }
//    cout << endl;
//}














//    double C, F;
//    char resp;
//    do {
//    cout << "Digite a temperatura em Celsius: ";
//    cin >> C;
//    F = 9.0 * C / 5.0 + 32.0;
//    cout << "Equivalente em Fahrenheit: " << F << endl;
//    cout << "Deseja repetir (s/n)? ";
//    cin >> resp;
//    } while (resp == 's');





//    int x, soma;
//    soma = 0;
//    cout << "Digite o primeiro numero: ";
//    cin >> x;
//    while (x != 0) {
//    soma = soma + x;
//    cout << "Digite outro numero: ";
//    cin >> x;
//    }
//    cout << "SOMA = " << soma;





//    int hora;
//    cout << "Digite uma hora do dia: ";
//    cin >> hora;
//    if (hora < 12) {
//    cout << "Bom dia!" << endl;
//    }
//    else {
//    cout << "Boa tarde!" << endl;
//    }





//    double salario1, salario2;
//    string nome1, nome2;
//    int idade;
//    char sexo;
//    cout << "Nome da primeira pessoa: ";
//    getline(cin, nome1);
//    cout << "Salario da primeira pessoa: ";
//    cin >> salario1;
//    cout << "Nome da segunda pessoa: ";
//    cin.ignore(INT_MAX, '\n'); // ------------- limpeza de buffer
//    getline(cin, nome2);
//    cout << "Salario da segunda pessoa: ";
//    cin >> salario2;
//    cout << "Digite uma idade: ";
//    cin >> idade;
//    cout << "Digite um sexo (F/M): ";
//    cin >> sexo;
//    cout << fixed << setprecision(2);
//    cout << "Nome 1: " << nome1 << endl;
//    cout << "Salario 1: " << salario1 << endl;
//    cout << "Nome 2: " << nome2 << endl;
//    cout << "Salario 2: " << salario2 << endl;
//    cout << "Idade: " << idade << endl;
//    cout << "Sexo: " << sexo << endl;
//





//    int a, b;
//    double resultado;
//    a = 5;
//    b = 2;
//    resultado = (double)a / b; (Transforma números inteiros em n reais).
//    cout << resultado << endl;

//    double a;
//    int b;
//    a = 5.0;
//    b = (int) a; ( Tranforma números reais em n inteiros.
//    cout << b << endl;









//        int idade;
//        double salario;
//        char genero;
//        string nome;
//
//        idade = 25;
//        salario = 2200.0;
//        genero = 'M';
//        nome = "Leone Ricardo";
//
//    cout << fixed << setprecision(2);
//    cout << "O funcionario " << nome << ", sexo " << genero << ", ganha " << salario << " e tem " << idade << " anos. " << endl;


//        double x;
//
//        x = 2.3456;
//
//        cout << fixed <<setprecision(2);
//        cout << x << endl;


//    cout << "Bom dia!" << endl;
//    cout << "Boa noite!" << endl (Quebra de linha);

//    int x, y;
//
//    x = 10;
//    y = 20;
//
//    cout << x << endl;
//    cout << y << endl;




//    int idade;
//    double salario, altura;
//    char genero;
//    string nome;
//
//    idade = 25;
//    salario = 2200.0;
//    altura = 1.80;
//    genero = 'M';
//    nome = "Leone";
//
//    cout << fixed << setprecision(2); // Fixar o número de casas decimais!!
//    cout << "IDADE = " << idade << endl;
//    cout << "SALARIO = " << salario << endl;
//    cout << "ALTURA = " << altura << endl;
//    cout << "GENERO = " << genero << endl;
//    cout << "NOME = " << nome << endl;

    return 0;
}
