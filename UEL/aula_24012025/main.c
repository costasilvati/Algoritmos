#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};

struct cadastro{
    char nome[50];
    int idade;
    struct endereco ender;
};

int main()
{
    struct cadastro cad;
    strcpy(cad.nome, "Juliana");
    cad.idade = 18;
    strcpy(cad.ender.rua, "Rua sem nome");
    cad.ender.numero = 90;

    printf("-- Estrutura aninhada cadastro --- \n");
    printf("cadastro.nome: %s \n", cad.nome);
    printf("cadastro.idade: %d \n", cad.idade);
    printf("cadastro.endereco.rua: %s \n", cad.ender.rua);
    printf("cadastro.endereco.numero: %d \n", cad.ender.numero);
    return 0;
}
