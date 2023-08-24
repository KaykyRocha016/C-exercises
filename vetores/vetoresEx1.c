#include <stdio.h>
/* Faça um programa que preencha vetor com oito números
inteiros, calcule e mostre dois vetores resultantes. O
primeiro vetor deve conter os números positivos e o
segundo deve conter os números negativos. Atenção:
cada vetor terá no máximo oito posições, que podem
não ser completamente usadas. Não deve haver
posições vazias entre dois valores*/
int main(){
    float inicial[8];
    float positivos[8];
    float negativos[8];
    int  i;
    for(i=0;i<8;i++){
        printf("digite o numero a ser inserido no vetor inicial");
        scanf("%f",&inicial[i]);



    }
    for(i=0;i<8; i++){
        if(inicial[i]>0){
            positivos[i]=inicial[i];
        }
        else{
            negativos[i]=inicial[i];
        }



    }
    for(i=0;i<8;i++){
        printf("%f",positivos[i],"\n");
    }
    
    for(i=0;i<8;i++){
        printf("%f",negativos[i],"\n");
    }

}
