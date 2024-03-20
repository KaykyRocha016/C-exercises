#include <stdio.h>
#include <stdlib.h>
int *digita_inteiro(){
    printf("digite um inteiro\n");
    int*end=(int*) malloc(sizeof(int));
    scanf("%d%*c", end);

    return end;
}
int main(){
    int* numero=digita_inteiro();
    printf("%d", *numero);
    free(numero);

}