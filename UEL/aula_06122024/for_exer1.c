#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Escrever um algoritmo que escreve o quadrado de
todos os inteiros, desde 1 ate 20.
*/
int main()
{
    int inicio = 1, fim = 20;
    printf("Exebindo o quadrado de todos os numeros entre 1 e 20\n");
    for(int i=inicio; i <= fim; i++){
        //int q = pow(i, 2);
        printf("Quadrado de %d - %d\n", i,(i*i));
    }
    return 0;
}
