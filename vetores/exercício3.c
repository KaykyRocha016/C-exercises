#include <stdio.h>
int main()
{
    int matriz[3][3];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j;
        for (j = 0; j < 3; j++)
        {
            printf("qual numero deseja inserir na linha de indice: %d coluna: %d\n", i, j );
            scanf("%d%*c",&matriz[i][j]);


        }
    }
    int iguais=1;
    for(i=0;i<3;i++){
        int j;
        for(j=0;j<3;j++){
            if(matriz[i][j]!= matriz[j][i]){
                iguais=0;
                break;
            }
        }
    }
    if(iguais!=0){
        printf("matriz simétrica");
    }
    else{
        printf("matriz não simétrica");
    }
}
