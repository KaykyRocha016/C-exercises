#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nome[100];
    float nota1;
    float nota2;

} Aluno;
typedef struct
{
    char nome[50];
    int QtdAlunos;
    Aluno *aluno;

} Disciplina;
int main()
{
    printf("quantas disciplinas deseja adicionar?\n");
    int n, i;
    scanf("%d%*c", &n);

    Disciplina *disciplinas = (Disciplina *)malloc(sizeof(Disciplina) * n);

    for (i = 0; i < n; i++)

    {
        printf("digite o nome da disciplina\n");
        gets(disciplinas[i].nome);
        printf("quantos alunos cursam essa disciplina?\n");
        scanf("%d%*c", &disciplinas[i].QtdAlunos);
        Aluno *alunos = (Aluno *)malloc(disciplinas[i].QtdAlunos * sizeof(Aluno));
        disciplinas[i].aluno = alunos;
        int j;
        for (j = 0; j < disciplinas[i].QtdAlunos; j++)
        {
            printf("digite o nome do aluno %d da disciplina %s\n", j+1 ,disciplinas[i].nome);
            gets(disciplinas[i].aluno[j].nome);
            printf("digite a nota 1 do aluno\n");
            scanf("%f%*c", &disciplinas[i].aluno[j].nota1);
            printf("digite a nota 2 do aluno\n");
            scanf("%f%*c", &disciplinas[i].aluno[j].nota2);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("a disciplina %s tem %d\n", disciplinas[i].nome, disciplinas[i].QtdAlunos);
        int j;
        for (j = 0; j < disciplinas[i].QtdAlunos; j++)
        {
            printf("Aluno: %s\n", disciplinas[i].aluno[j].nome);
            printf("nota1: %f\n", disciplinas[i].aluno[j].nota1);
            printf("nota2: %f\n", disciplinas[i].aluno[j].nota2);
            free(disciplinas[i].aluno);
        }
    }
    free(disciplinas);
}