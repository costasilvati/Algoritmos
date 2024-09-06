#include <stdio.h>

#include <stdlib.h>



int main(){

  //x = 2 * ( ( a – c ) / 8 ) – b * 5

  int a, b, c, x;

  printf("Digite o valor a: \n");

  scanf("%d", &a);

  printf("Digite o valor b: \n");

  scanf("%d", &b);

  printf("Digite o valor c: \n");

  scanf("%d", &c);

  x = 2*((a-c)/8)-b*5;

  printf("A equacao: x = 2 * ( ( %d - %d ) / 8 ) - %d * 5 \n",a,c,b);

  printf("O valor de x eh: %d", x);

  return 0;

}