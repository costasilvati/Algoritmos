#include <stdio.h>
#include <stdlib.h>
/*
Faca uma funcao que recebe um numero como parametro e
verifique se um ele eh perfeito ou nao. Um valor e dito
perfeito quando ele eh igual a soma dos seus divisores
excetuando ele próprio. (Ex: 6 eh perfeito, 6 = 1 + 2 + 3,
que sao seus divisores).
A funcao deve retornar 0 caso o numero seja perfeito e
1 caso contrario.
*/
int perfeito(int num);

int main()
{
    int numero = 0, retorno = 0;
    printf("Digite um numero \n");
    scanf("%d", &numero);
    retorno = perfeito(numero);
    if(retorno == 1){
        printf("O valor eh perfeito\n");
    }else{
        printf("O valor NAO eh perfeito\n");
    }
    return 0;
}

int perfeito(int num){
    int soma = 0;
    for(int i=1; i<num; i++){
        if(num%i==0){
            soma+=i;
        }
    }
    if(soma == num){
        return 0;
    }else{
        return 1;
    }
}




