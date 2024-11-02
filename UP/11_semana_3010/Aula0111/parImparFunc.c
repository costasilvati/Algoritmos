#include <stdio.h>
#include <stdlib.h>
/*
Escreva um procedimento que recebe um nœmero
como par‰metro e diz se esse nœmero Ž par ou ’mpar.
*/
void parImpar(int numero); // Prot—tipo

int main()
{
    int n =0;
    printf("Digite um numero, e veja se ele eh par ou impar\n");
    scanf("%d", &n);
    //parImpar(n);
    return 0;
}

void parImpar(int numero){
    if(numero%2 == 0){
        printf("O numero %d eh par\n", numero);
    }else{
        printf("O numero %d eh impar \n", numero);
    }
}
