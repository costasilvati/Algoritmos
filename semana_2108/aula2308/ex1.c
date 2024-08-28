#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* Escreva um algoritmo em C que recebe do usuário
    um número e imprime seu quadrado e seu cubo.*/
    double numero, quadrado, cubo;

    printf("Digite um numero \n");
    scanf("%lf", &numero);
    quadrado = pow(numero,2);
    cubo = pow(numero, 3);
    printf("O valor digitado eh: %lf \n", numero);
    printf("O numero digitado ao quadrado %lf \n", quadrado);
    printf("Onumero digitado ao cubo eh %0.2lf \n", cubo);
    return 0;
}
