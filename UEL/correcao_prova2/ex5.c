#include <stdio.h>

// Definição da estrutura Produto
typedef struct {
    int codigo;
    char nome[50];
    float preco[3]; // preços dos últimos 3 meses
} Produto;

// Função para calcular a média de preços de um produto
float calcularMedia(Produto p) {
    return (p.preco[0] + p.preco[1] + p.preco[2]) / 3;
}

// Função para encontrar o produto com a maior média de preços
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
        printf("Digite o código do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);

        printf("Digite o nome do produto %d: ", i + 1);
        scanf(" %[^"]s", produtos[i].nome);

        printf("Digite os preços dos últimos 3 meses do produto %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &produtos[i].preco[j]);
        }
    }

    // Exibir média de cada produto
    printf("\nMédias de preços dos produtos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Produto %s - Média: %.2f\n", produtos[i].nome, calcularMedia(produtos[i]));
    }

    // Encontrar e exibir o produto com a maior média de preços
    int indiceMaior = encontrarMaiorMedia(produtos, 5);
    printf("\nProduto com a maior média de preços:\n");
    printf("%s (Código: %d) - Média: %.2f\n", produtos[indiceMaior].nome, produtos[indiceMaior].codigo, calcularMedia(produtos[indiceMaior]));

    return 0;
}
