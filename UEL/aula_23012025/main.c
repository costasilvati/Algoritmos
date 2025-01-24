#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[10] = {'J','o','a','o','\0'};
    printf("O nome eh: %s\n", nome);
    char leitura[50];
    printf("Digite uma frase com 50 caracteres (max)\n");
    //scanf("%s", leitura); // Nao le espacos
    scanf(" %[^\n]", leitura); // Le espacos e texto ateh \n
    printf("Texto digitado: %s \n", leitura);
    int qtd = strlen(leitura);
    printf("O texto tem %d caracteres\n", qtd);
    // Comparar 2 strings
    int compare = strcmp(nome, leitura);
    // Se compare for 0 strings sao iguais
    printf("O valor de compare eh: %d", compare);
    return 0;
}
