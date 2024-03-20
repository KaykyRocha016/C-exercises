#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Crie uma função que receba uma string contendo duas palavras
separadas por espaço, e retorne o endereço inicial da 2a
 palavra.
OBS: criar uma área alocada dinamicamente para armazenar a 2a
palavra, e retornar seu endereço (cuidado, não é o mesmo
exercício que vimos anteriormente!!)*/
char* retorna_endereco(char* string){
    char* posicao=string;
    while(*posicao!=' '){
        posicao++;
    }
    //pra chegar na primeira letra
    posicao++;
    char*segunda_palavra=(char*)malloc(strlen(posicao)*sizeof(char));
    strcpy(segunda_palavra,posicao);
    return segunda_palavra;


}
int main(){
    printf("digite duas palavras separadas por espaço\n");
    char string[100];
    gets(string);
    char*segunda=retorna_endereco(string);
    
    printf("%s", segunda);


    
    

}