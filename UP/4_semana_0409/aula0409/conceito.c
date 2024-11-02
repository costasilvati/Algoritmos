#include <stdio.h>
#include <stdlib.h>

int main()
{
    char conceito;
    printf("Qual eh o conceito\n");
    scanf(" %c",&conceito);
    switch(conceito){
    case 'A':
    case 'a':
        printf("O conceito eh excelente! \n");
        break;
    case 'B':
    case 'b':
        printf("O conceito eh bom \n");
        break;
    case 'C':
    case 'c':
        printf("O conceito eh regular \n");
        break;
    case 'D':
    case 'd':
        printf("O conceito eh repovado\n");
        break;
    default:
        printf("Conceito invalido digite A, B, C ou D\n");
    }


    return 0;
}
