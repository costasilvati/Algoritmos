#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa em C que cria um vetor de números inteiros
de 10 posições e que solicita ao usuário que preencha esse
vetor. Logo após,  o seu algoritmo  deve:
a. Imprimir o maior valor contido no vetor;
b. A média os valores
c. Os valores dispostos em ordem crescente
d. Os números primos contidos no vetor
*/
int main()
{
    int vetor[10], maior=0, soma = 0;
    printf("Criando um vetor\n");
    // Preencher o vetor
    for(int i=0; i<10; i++){
        printf("Digite um valor inteiro \n");
        scanf("%d", &vetor[i]);
        soma+=vetor[i];
        if(i ==0){ // Primeira iteração do laço
            maior = vetor[i];
        }else if(vetor[i] > maior){
            maior = vetor[i];
        }
        //printf("Rodada %d - O maior valor eh %d \n", i, maior);
    }
    printf("O maior valor eh %d \n", maior);

    int min_idx, temp;
    for (int i = 0; i < 10-1; i++) {
        min_idx = i;
        for (int j = i+1; j < 10; j++) {
            if (vetor[j] < vetor[min_idx]) {
                min_idx = j;
            }
        }
        temp = vetor[min_idx];
        vetor[min_idx] = vetor[i];
        vetor[i] = temp;
    }

    printf("vetor ordenado\n");
    for(int i=0; i<10; i++){
        printf("%d -", vetor[i]);
    }
    float media = soma/10;
    printf("media eh %.f\n", media);

    return 0;
}
