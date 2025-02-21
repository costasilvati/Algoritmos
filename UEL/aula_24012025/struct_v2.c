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
    struct cadastro c;
    printf("Digite o nome do cadastro \n");
    scanf(" %[^\n]", c.nome);
    printf("Digite a idade do cadastro: %s", c.nome);
    scanf("%d", &c.idade);
    printf("Digite a rua do cadastro %s \n", c.nome);
    scanf(" %[^\n]", c.rua);
    printf("Digite o numero do cadastro %s", c.nome);
    scanf("%d", &c.numero);
    // Imprime valores da estrutura
    printf("----- Cadastro -------\n");
    printf("Nome: %s \n", c.nome);
    printf("Idade: %d \n", c.idade);
    printf("Rua: %s \n", c.rua);
    printf("Numero: %d \n", c.numero);
    // Declarar e inicializar
    struct cadastro c2 = {"", 24, "Rua minha", 90};
    // Imprime valores da estrutura c2
    printf("----- Cadastro C2 -------\n");
    printf("Nome: %s \n", c2.nome);
    printf("Idade: %d \n", c2.idade);
    printf("Rua: %s \n", c2.rua);
    printf("Numero: %d \n", c2.numero);
    return 0;
}
