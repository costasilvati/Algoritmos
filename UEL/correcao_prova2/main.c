#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

// Estrutura de produto
typedef struct produto{
    int id;
    char nome[50];
    float valor;
    float precos[TAM];
    float media;
} Produto;
// Prototipo de funcao
float calculaMedia(Produto p);
void maiorMedia(Produto p[], int qtd);

int main()
{
    int qtd = 3;
    Produto cadastro[qtd]; // vetor de Produto
    for(int i=0; i <qtd; i++){
      cadastro[i].id = i+1;
      printf("Digite o nome do produto %d\n", i+1);
      scanf(" %[^\n]", cadastro[i].nome);
      printf("Digite o valor atual do produto %d\n", i+1);
      scanf("%f", &cadastro[i].valor);
      for(int j=0; j<TAM; j++){
        printf("Digite o valor historico %d do produto \n", j+1);
        scanf("%f", &cadastro[i].precos[j]);
      }
      cadastro[i].media = calculaMedia(cadastro[i]);
      printf("Media de preco do produto %d: %.2f \n", i+1, cadastro[i].media);
      printf("\n --------------- \n");
    }
    maiorMedia(cadastro, qtd);
    return 0;
}

float calculaMedia(Produto p){
    float soma = 0;
    for(int i=0; i<TAM; i++){
        soma+=p.precos[i];
    }
    return soma/TAM;
}

void maiorMedia(Produto p[], int qtd){
    float maior = calculaMedia(p[0]);
    int indexMaior = 0;
    for(int i=0; i<qtd ; i++){
        float media = calculaMedia(p[i]);
        if(media > maior){
            maior = media;
            indexMaior = i;
        }
    }
    printf("O produto com a maior media eh: %s\n", p[indexMaior].nome);
    printf("A media de precos do produto eh: %.2f\n", maior);
}

