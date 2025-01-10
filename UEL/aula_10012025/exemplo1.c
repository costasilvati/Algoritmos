#include <stdio.h>
#include <stdlib.h>
/*
Vamos criar uma matriz com duas linhas e duas colunas para
armazenar valores inteiros. Cada posicao da matriz ira
 receber o seguinte valor: numero linha * numero coluna.
*/
int main(){
    int matriz[2][3];

    for(int l=0; l<2; l++){ // Percorre linhas
        for(int c=0; c<3; c++){
            matriz[l][c] = l*c;
            printf("[%d] ",matriz[l][c]);
        }
        printf("\n");
    }
    return 0;
}
