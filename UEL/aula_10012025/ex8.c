#include <stdio.h>
#include <stdlib.h>


void multiplicarMatrizes(int a[10][10], int b[10][10], int resultado[10][10], int m, int n, int p) {
    // Inicializa a matriz resultado com zeros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicação das matrizes
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[10][10], b[10][10], resultado[10][10];
    int m, n, p;

    // Solicita as dimensões da primeira matriz
    printf("Digite as dimensões da primeira matriz (linhas e colunas): ");
    scanf("%d %d", &m, &n);

    // Solicita os valores da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Solicita as dimensões da segunda matriz
    printf("Digite as dimensões da segunda matriz (colunas devem ser iguais ao número de linhas da primeira): ");
    scanf("%d %d", &n, &p);

    // Solicita os valores da segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Chama a função para multiplicar as matrizes
    multiplicarMatrizes(a, b, resultado, m, n, p);

    // Exibe a matriz resultado
    printf("Matriz resultado:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
