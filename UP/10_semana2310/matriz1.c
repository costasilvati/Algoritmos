#include <stdio.h>
#include <stdlib.h>
/*
• Vamos criar uma matriz com duas linhas e duas colunas para
armazenar valores inteiros. Cada posição da matriz irá receber o
seguinte valor: número linha * número coluna
*/
int main()
{
    int mat[2][2]; // declara matriz
    printf("O ultimo valor da matriz eh %d \n", mat[1][1]);
    // inserir valores
    for(int linha=0; linha<2; linha++){
        for(int col=0; col<2; col++){
                mat[linha][col] = linha*col;
        }
    }
    // imprimir matriz
    for(int l=0; l<2; l++){
        for(int c=0; c<2; c++){
            printf("[ %d ] ", mat[l][c]);
        }
        printf("\n");
    }

    return 0;
}
