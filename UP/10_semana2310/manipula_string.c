#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char xuxu[20], indereco[20]; // Maior que 20??
    printf("Digite um texto de ateh 20 caracteres \n");
    gets(xuxu);

    printf("Digite OUTRO texto de ateh 20 caracteres \n");
    gets(indereco);
    // strcmp compara string e retorna um valor inteiro
    // 0 se xuxu e indereco forem iguaus
    int strcmp_result = strcmp(xuxu, indereco);
    printf("O retorno de strcmp eh: %d \n", strcmp_result);

    if(strcmp_result ==0){
        printf("Iguais para strcmp \n");
    }else{
        printf("Diferente para strcmp \n");
    }

    if(strcasecmp(xuxu, indereco) == 0){
        printf("Iguais para strcasecmp \n");
    }else{
        printf("Diferente para strcasecmp \n");
    }

    char copia[20];

    strcpy(copia, xuxu);
    printf("Copia do primeiro valor digitado eh: %s \n", copia);

    strcat(xuxu, indereco);
    printf("Os dois valores digitados concatenados formam %s \n", xuxu);
    return 0;
}
