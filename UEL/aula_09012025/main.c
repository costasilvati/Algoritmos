#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo em C que recebe como entrada 10 numeros
inteiros informados pelo usuarios e os armazena-os em um vetor.
Depois, o seu algoritmo deve calcular a soma e a media dos numeros
armazenados. Ao final, o seu algoritmo deve imprimir o vetor,
a soma e a media de seus elementos.
*/
int main(){
    int valores[10];
    int soma = 0;
    float media = 0;
    for(int i=0; i<10; i++){ // i eh indice do vetor
        printf ("Digite um valor para a posicao %d do vetor\n", i);
        scanf("%d", &valores[i]);
        soma+=valores[i];
    }
    // Imprimir o vetor
    for(int i=0; i<10; i++){
        printf("[%d]: %d \n", i, valores[i]);
    }
    // Media e soma
    media = (float)soma/10;
    printf("Soma: %d\n media: %.2f", soma, media);
    return 0;
}
