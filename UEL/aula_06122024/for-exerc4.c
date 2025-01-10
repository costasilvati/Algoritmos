#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
4 - FOR
*/
int main()
{
    int numero = 100, soma=0;
    for(int i=numero; i<=200; i++){
        if(i%7 == 0){
            printf("%d - ", i);
            soma += i;
        }
    }
    printf("\n-- \nA soma dos multiplos de 7 eh: %d \n --\n", soma);
    // Versão 2
    numero = 105;
    soma = 0;
    for(int i=numero; i<=200; i+=7){
        printf("%d - ", i);
        soma += i;
    }
    printf("\n-- \nA soma dos multiplos de 7 eh: %d \n", soma);
    return 0;
}
