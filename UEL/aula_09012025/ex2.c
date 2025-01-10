#include <stdio.h>
#include <stdlib.h>
/*
Escrever um algoritmo que recebe como entrada 10 numeros
inteiros informados pelo usuarios e os armazena em um vetor.
Logo apos o seu algoritmo devera imprimir os valores armazenados.
*/
int main(){
    int valores[10];
    for(int i=0; i<10; i++){ // i eh indice do vetor
        printf ("Digite um valor para a posicao %d do vetor\n", i);
        scanf("%d", &valores[i]);
    }

    for(int i=0; i<10; i++){
        printf("[%d]: %d \n", i, valores[i]);
    }
    return 0;
}
