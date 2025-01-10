#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo em C que cria um vetor de 10 posicoes,
preenche o mesmo com os numeros
pares a partir do 2 e depois imprime o conteúdo do vetor.
*/
int main(){
    int valores[10];
    int num =2; // valor guardado
    for(int i=0; i<10; i++){ // i eh indice do vetor
        valores[i] = num;
        num+=2;
        printf("[%d] - ", valores[i]);
    }
    return 0;
}
