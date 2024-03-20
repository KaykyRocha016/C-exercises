/* No programa principal, crie 2 strings com espaço para 19
caracteres (+ terminador). Permita a digitação dessas strings.
Crie uma função que receba essas strings, concatene elas, e
devolva o endereço inicial da string concatenada. Essa string deve
ter o tamanho exato dos textos concatenados. Exiba a string
concatenada no programa principal.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concatena(char *a, char *b)

{
    int tamanho=strlen(a)+strlen(b);

    char *palavra = (char *)malloc(tamanho+1);
    palavra=strcat(a,b);
    return palavra;
}
int main()
{
    char s1[20], s2[20];
    printf("digite uma palavra\n");
    gets(s1);
    printf("digite uma palavra\n");
    gets(s2);
    concatena(s1,s2);

    printf("%s", concatena(s1, s2));
}