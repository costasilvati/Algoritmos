#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor;
    double raiz;
    printf("Digite um valor e veja sua raiz quadrada. O valor maior ou igual a zero");
    scanf("%d", &valor);

    raiz = sqrt(valor);
    printf("A raiz quadrada de %d eh %lf",valor, raiz);

    return 0;
}
