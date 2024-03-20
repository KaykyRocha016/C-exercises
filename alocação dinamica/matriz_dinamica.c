#include <stdio.h>
#include <stdlib.h>
void preenche_matriz(int **matriz, int linhas, int colunas)
{
    int i;
    for (i = 0; i < linhas; i++)
    {
        int j;
        for (j = 0; j < colunas; j++)
        {
            printf("digite o valor que vai na linha %d, coluna %d\n", i + 1, j + 1);
            scanf("%d%*c", &matriz[i][j]);
        }
    }
}
int main()
{
    int linhas, colunas,i;
    printf("quantas linhas e quantas colunas terão sua matriz?\n");
    scanf("%d%*c", &linhas);
    scanf("%d%*c", &colunas);
    int **matriz = (int**)malloc(linhas * sizeof(int *));

    for (int i = 0; i < colunas; i++)
    {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    preenche_matriz(matriz, linhas, colunas);
    for (i = 0; i < linhas; i++)
    {
        int j;
        for (j = 0; j < colunas; j++)
        {
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<linhas;i++){
        free(matriz[i]);

    }
    free(matriz);
}