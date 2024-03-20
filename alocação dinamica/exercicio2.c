/*Crie um vetor de strings, alocado dinamicamente.
Permita a digitação das strings, depois mostre elas na tela*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("quantas strings serão digitadas?\n");
    int n;
    scanf("%d%*c", &n);
    char **vetor=(char**) malloc(n*sizeof(char*));
    int i;
    for(i=0;i<n;i++){
        char string[100];
        printf("digite uma string\n");
        gets(string);
        vetor[i]=(char*)malloc(strlen(string)+1);
        strcpy(vetor[i],string);



    }
    
    for(i=0;i<n;i++){
        printf("%s, ", vetor[i]);
        free(vetor[i]);
    }
    free(vetor);
    

}