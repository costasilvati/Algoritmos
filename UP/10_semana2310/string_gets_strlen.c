#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[20]; // Maior que 20??
    printf("Digite um texto de ateh 20 caracteres \n");
    // scanf("%s", string); // Nao le espacos
    scanf("%[^\n]", string); // scanf aceitando espacos
    //gets(string);

    printf("A palavra digitada: %s \n", string);
    int tamanho = strlen(string);
    printf("O tamanho da palavra eh: %d", tamanho);
    return 0;
}











