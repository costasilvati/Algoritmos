#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
3 - Escrever um algoritmo que le um numero inteiro positivo e que
escreve todos os numeros a partir do numero lido ate o zero (ou seja,
escreva os numeros de tras para a frente, um a um).
*/
int main()
{
    int numero = 0;
    printf("Digite um valor inteiro positivo \n");
    scanf("%d", &numero);
    if(numero >= 0){
        for(int i=numero; i>=0; i--){
            printf("%d - ", i);
        }
    }else{
        printf("O valor digitado NAO eh inteiro positivo \n");
    }
    return 0;
}
