#include <stdio.h>
#include <stdlib.h>

/*
1 - Escreva um algoritmo que solicita um número ao usuarios
 e verifica se o numero e par ou  ımpar.
2 - Receber um número como entrada do usuarios e dizer se o
numero e positivo ou nao-positivo.
*/
int main()
{
    int valor = 0;
    printf("Digite um valor \n");
    scanf("%d", &valor);
    //Ver se valor e par
    if(valor%2 == 0){
        printf("O valor %d eh par\n", valor);
    }else{
        printf("O valor %d eh impar \n", valor);
    }

    if(valor > 0){
        printf("O valor %d eh positivo \n", valor);
    }else{
        printf("O valor %d eh negativo \n", valor);
    }
    return 0;
}
