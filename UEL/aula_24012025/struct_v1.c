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
    strcpy(c.nome, "Joao");
    c.idade = 18;
    strcpy(c.rua, "Rua Sem nome");
    c.numero = 76;
    printf("----- Cadastro -------\n");
    printf("Nome: %s \n", c.nome);
    printf("Idade: %d \n", c.idade);
    printf("Rua: %s \n", c.rua);
    printf("Numero: %d \n", c.numero);
    return 0;
}
