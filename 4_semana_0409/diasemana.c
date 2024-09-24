#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Digite um numero e veja o dia da semana\n");
    scanf("%d",&dia);

    switch(dia){
    case 1:
        printf("O dia da semana eh Domingo \n");
        break;
    case 2:
        printf("O dia da semana eh Segunda-feira\n");
        break;
    case 3:
        printf("O dia da semana eh Terca-feira\n");
        break;
    case 4:
        printf("O dia da semana eh Quarta-feira\n");
        break;
    case 5:
        printf("O dia da semana eh Quinta-feira\n");
        break;
    case 6:
        printf("O dia da semana eh Sexta-feira\n");
        break;
    case 7:
        printf("O dia da semana eh Sabado\n");
        break;
    default:
        printf(" Dia da semana invalido \n Digite valores entre 1 e 7");
    }
    return 0;
}

