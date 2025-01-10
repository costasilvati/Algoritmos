#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
2 - Escrever um algoritmo que recebe do usuario um numero inteiro
positivo e que escreve todos os numeros multiplos de 3, desde 0
ate o valor lido.
*/
int main()
{
    int numero = 0;
    printf("Digite um valor inteiro positivo \n");
    scanf("%d", &numero);
    if(numero >= 0){
        // Versão 1
        for(int i=0; i<=numero; i++){
            if(i%3==0){
                printf("%d - ", i);
            }
        }
        printf("\n--- vesao 2 i+=3 \n");
        // Versão 2
        for(int i=0; i<=numero; i+=3){
            printf("%d - ", i);
        }
    }else{
        printf("O valor digitado NAO eh inteiro positivo \n");
    }
    return 0;
}
