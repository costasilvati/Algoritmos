#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* Escrever um algoritmo em C que recebe dois números do usuário e retorna
    a raiz quadrada da multiplicação desses número*/
    double n1, n2, m,raiz;
    printf("Digite o valor 1 \n");
    scanf("%lf", &n1);
    printf("Digite o valor 2 \n");
    scanf("%lf", &n2);
    m = n1 * n2;
    raiz = sqrt(m);
    printf("O resultado da multiplicacao de %lf x %lf: %lf. A raiz quadrada desse valor eh %0.2lf",
           n1, n2, m, raiz);

    return 0;
}
