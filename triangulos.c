#include <stdio.h>
int main(){
  //criando variáveis
  float lado1;
  float lado2;
  float lado3;
  //formato da entrada
  printf("digite o valor do lado1");
  scanf("%f",&lado1);
  printf("digite o valor do lado2");
  scanf("%f", &lado2);
  printf("digite o valor do lado 3");
  scanf("%f", &lado3);
  //formato da condicional
  if ((lado1+lado2 > lado3) && (lado1 +lado3>lado2) && (lado2 + lado3>lado1))
  //colocar chaves para formar blocos de condicionais
  {
    if((lado1==lado2)&&(lado1==lado2)){
      printf("equilatero");
    }
    else{
      if((lado1==lado2)||(lado1==lado3)||(lado3==lado2)){
        printf("isosceles");

      }
      else{
        printf("escaleno");
      }

    }
  }
  else{
    printf("não é triangulo");
  }
}