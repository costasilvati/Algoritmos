#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, meu_numero;
    meu_numero = 1;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &numero);

    if(meu_numero == numero){
        printf("Os numeros sao iguais \n");
    }
    printf("O sistema terminou \n");
    return 0;
}
