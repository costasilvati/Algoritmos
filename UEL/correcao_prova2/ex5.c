#include <stdio.h>

// Defini��o da estrutura Produto
typedef struct {
    int codigo;
    char nome[50];
    float preco[3]; // pre�os dos �ltimos 3 meses
} Produto;

// Fun��o para calcular a m�dia de pre�os de um produto
float calcularMedia(Produto p) {
    return (p.preco[0] + p.preco[1] + p.preco[2]) / 3;
}

// Fun��o para encontrar o produto com a maior m�dia de pre�os
int encontrarMaiorMedia(Produto produtos[], int tamanho) {
    int indiceMaior = 0;
    float maiorMedia = calcularMedia(produtos[0]);

    for (int i = 1; i < tamanho; i++) {
        float mediaAtual = calcularMedia(produtos[i]);
        if (mediaAtual > maiorMedia) {
            maiorMedia = mediaAtual;
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

int main() {
    Produto produtos[5];

    // Entrada de dados
    for (int i = 0; i < 5; i++) {
        printf("Digite o c�digo do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);

        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^"]s", produtos[i].nome);

        printf("Digite os pre�os dos �ltimos 3 meses do produto %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &produtos[i].preco[j]);
        }
    }

    // Exibir m�dia de cada produto
    printf("\nM�dias de pre�os dos produtos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Produto %s - M�dia: %.2f\n", produtos[i].nome, calcularMedia(produtos[i]));
    }

    // Encontrar e exibir o produto com a maior m�dia de pre�os
    int indiceMaior = encontrarMaiorMedia(produtos, 5);
    printf("\nProduto com a maior m�dia de pre�os:\n");
    printf("%s (C�digo: %d) - M�dia: %.2f\n", produtos[indiceMaior].nome, produtos[indiceMaior].codigo, calcularMedia(produtos[indiceMaior]));

    return 0;
}
