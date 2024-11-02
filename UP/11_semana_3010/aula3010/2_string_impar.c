#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva um algoritmo que receba uma String do usuário e imprima as letras
das posições ímpares
*/
int main()
{
    char texto[20];
    printf("Digite um texto\n");
    scanf("%[^\n]",texto);
    printf("O texto digitado eh: %s", texto);

    printf("Os caracteres impares sao:\n-> ");
    int tamanho = strlen(texto); // funçao que retorna tamanho do vetor
    for(int i=1;i< tamanho;i+=2){
        printf("%c", texto[i]);
    }

    printf("\n modo 2**** \n-> ");
    for(int i=0;i< tamanho;i++){
        if(i%2!=0){
           printf("%c", texto[i]);
        }
    }

    printf("\n modo 3**** posicao no texto nao index\n-> ");
    for(int i=0;i< tamanho;i++){
        if((i+1)%2!=0){
           printf("%c", texto[i]);
        }
    }
    return 0;
}







