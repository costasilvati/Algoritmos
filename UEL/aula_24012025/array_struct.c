#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

struct aluno{
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
};

int main()
{
    // Vetores (arrays) de estruturas (registros)
    int tamanho = 2;
    struct cadastro c[tamanho];
    for(int i=0; i<tamanho; i++){
        printf("Digite o nome do cadastro \n");
        scanf(" %[^\n]", c[i].nome);
        printf("Digite a idade do cadastro: %s \n", c[i].nome);
        scanf("%d", &c[i].idade);
        printf("Digite a rua do cadastro %s \n", c[i].nome);
        scanf(" %[^\n]", c[i].rua);
        printf("Digite o numero do cadastro %s \n", c[i].nome);
        scanf("%d", &c[i].numero);
    }
    // Imprime valores da estrutura
    for(int i=0; i<tamanho; i++){
        printf("----- Cadastro -------\n");
        printf("Nome: %s \n", c[i].nome);
        printf("Idade: %d \n", c[i].idade);
        printf("Rua: %s \n", c[i].rua);
        printf("Numero: %d \n", c[i].numero);
    }


}
