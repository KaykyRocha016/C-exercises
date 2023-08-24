#include <stdio.h>
int main()
{
    // define o numero de linhas da matriz 1
    int linhas1;
    printf("quantas linhas tem sua matriz1?");
    scanf("%d", &linhas1);

    // define o numero de colunas da matriz1
    int colunas1;
    printf("quantas colunas tem sua matriz1?");
    scanf("%d", &colunas1);
    // define o numero de linhas da matriz 2

    int linhas2;
    printf("quantas linhas tem a matriz2?");
    scanf("%d", &linhas2);
    // define o numero de colunas da matriz 2
    int colunas2;
    printf("quantas colunas tem sua matriz12");
    scanf("%d", &colunas2);

    // cria os vetores
    int matriz1[linhas1][colunas1];
    int matriz2[linhas2][colunas2];

    // inserindo elementos na matriz 1
    int i;

    for (i = 0; i < linhas1; i++)
    {
        int j;

        for (j = 0; j < colunas1; j++)
        {
            printf("qual numero deseja inserir na linha: %d /coluna: %d da matriz 1\n", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // inserindo elementos na matriz2
    for (i = 0; i < linhas2; i++)
    {
        int j;

        for (j = 0; j < colunas2; j++)
        {
            printf("qual numero deseja inserir na linha: %d /coluna: %d da matriz 2\n", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    if (colunas1 != linhas2)
    {
        printf("não é possível multiplicar as matrizes");
    }
    else{
        
    }
 
}