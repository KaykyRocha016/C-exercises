#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Exercício” (exemplo)
    // Crie um vetor de ponteiros, com capacidade para armazenar 3 endereços de inteiros (ponteiros para inteiros).
    int *p[3];

    /*2 Crie 3 áreas alocadas dinamicamente, cada uma com capacidade para armazenar 4 inteiros*/
    int *a1 = (int *)malloc(4 * sizeof(int));
    int *a2 = (int *)malloc(4 * sizeof(int));
    int *a3 = (int *)malloc(4 * sizeof(int));
    /*Coloque o endereço de cada área criada acima em uma posição do vetor de ponteiros criado no item 1.*/

    p[0] = a1;
    p[1] = a2;
    p[2] = a3;
    /*Crie um ponteiro adequado para receber o valor armazenado (endereço de memória) no nome do vetor criado no item 1.*/
    int **pp;
    pp = &p;
    int i;
    for (i = 0; i < 3; i++)
    {
        int j;
        for (j = 0; j < 4; j++)
        {
            printf("digite um valor:\n");
            scanf("%d", &pp[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        int j;
        for (j = 0; j < 4; j++)
        {
            printf("%d",pp[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        free(p[i]);
    }
    free(pp);
}