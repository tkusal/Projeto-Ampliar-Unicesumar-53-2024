/*
    Receba um programa que receba o cadastro de um aluno:
    - Nome
    - Idade
    - Nota 1
    - Nota 2
    - Média

    O programa deverá ter 1 função para entrada dos dados do aluno.
    Deverá ter uma sub-rotina para calcular a média
    Deverá ter uma sub-rotina para exibir a média pro usuário

    Escrito em pair programming por Pedro e Rafael.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float Nota1, Nota2, media;
    int idade;
} tipoAluno;

tipoAluno aluno;

void entrada()
{
    printf("\n digite o nome do aluno:");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
    getchar();

    printf("\nqual é a idade do aluno: ");
    scanf("%d", &aluno.idade);
    getchar();

    printf("\nDigite a sua Nota:  ");
    scanf("%f", &aluno.Nota1);
    getchar();

    printf("\nDigite a sua Nota:  ");
    scanf("%f", &aluno.Nota2);
    getchar();
}

void calculo()
{
    aluno.media = (aluno.Nota1 + aluno.Nota2) / 2;
}

void resposta()
{
    printf("\na media do aluno(a)[%s] foi %.2f", aluno.nome, aluno.media);
    printf("\na idade do aluno: %d \n", aluno.idade);
    
}

int main()
{
    entrada();
    calculo();
    resposta();

    return 0;
}