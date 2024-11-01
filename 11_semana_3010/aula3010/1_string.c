#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva um algoritmo que receba uma String do
usu‡rio e imprima as quatro primeiras letras dessa String
*/
int main()
{
    char texto[20];
    printf("Digite um texto\n");
    gets(texto);
    printf("O texto digitado eh: %s \n", texto);
    printf("Os 4 primeiros caracteres do texto sao: \n-> %.4s \n", texto);

    printf("Os 4 primeiros caracteres to texto sao [modo vetor]: \n-> ");
    for(int i=0;i<4;i++){
        printf("%c", texto[i]);
    }
    return 0;
}





