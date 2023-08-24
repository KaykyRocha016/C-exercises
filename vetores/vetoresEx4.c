#include <stdio.h>
int main()
{
    int dimensão;
    printf("qual a dimensão da matriz quadrada?: ");
    scanf("%d", &dimensão);
    int matriz[dimensão][dimensão];
    int i;

    for (i = 0; i < dimensão; i++)
    {
        int j;
        for (j = 0; j < dimensão; j++)
        {
            printf("digite o valor da linha %d coluna %d: \n", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }
    int identidade;
    for (i = 0; i < dimensão; i++)
    {
        int j;
        for (j = 0; j < dimensão; j++)
        {
            if (j == i && matriz[i][j] != 1)
            {
                identidade = 0;
            }
        }
    }
    for (i = 0; i < dimensão; i++)
    {;
        int j;
        for (j = 0; j < dimensão; j++)
        {
            if (j != i && matriz[i][j] != 0)
            {
                identidade = 0;
            }
        }
    }
    if(identidade==0){
        printf("a matriz n e identidade");
    }
    else{
        printf("a matriz e identidade");
    }
}