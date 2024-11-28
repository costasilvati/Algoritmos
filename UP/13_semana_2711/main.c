#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void poli(int l, int n1, int n2, int n3);

int main()
{
  int l, n1, n2, n3;

  printf("Digite o numero de lados:\n");
  scanf("%d", &l);
  if(l == 3){
    printf("Digite o numero do lado 1:\n");
    scanf("%d", &n1);
    printf("Digite o numero do lado 2:\n");
    scanf("%d", &n2);
    printf("Digite o numero do lado 3:\n");
    scanf("%d", &n3);
    poli(l, n1, n2, n3);
  }else if(l == 4){
    printf("Digite o valor dos lados:\n");
    scanf("%d", &n2);
    poli(l, n1, n2, n3);
  }else if(l == 5){
    poli(l, n1, n2, n3);
  }else{
    printf("Tem algo errado.");
  }

  return 0;
}

void poli(int l, int n1, int n2, int n3){
  int a = 0, p = 0;
  if(l == 3){
    p = n1 + n2 + n3;
    printf("Eh triangulo. Seu perimetro eh %d\n", p);
  }else if(l == 4){
    a = pow(n2, 2);
    printf("Eh quadrado. Sua area eh %d\n", a);
  }else if(l == 5){
    printf("Eh pentagono!\n");
  }
}
