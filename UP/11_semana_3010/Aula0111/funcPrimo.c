#include <stdio.h>
#include <stdlib.h>
/*
Escreva um procedimento que recebe um nœmero como par‰metro e
diz se esse nœmero Ž primo.
*/
void primo(int num);// Prot—tipo

int main()
{
    int valor = 0;
    do{
        printf("Digite um numero! ou 0 para sair\n");
        scanf("%d", &valor);
        if(valor !=0){
            primo(valor); // chamada da funcao
        }
    }while(valor !=0);
    return 0;
}

void primo (int num){
    int divisivel = 0;
    for(int i=2; i<num; i++){ // Percorre todos os numeros ate < num
        if(num%i==0){ // testa divisao
            divisivel++; // Se for divisivel aumenta 1
        }
    }
    if(divisivel==0 && num > 0){
        printf("%d eh primo! \n", num);
    }else{
        printf("%d NAO eh primo! \n", num);
    }
}




