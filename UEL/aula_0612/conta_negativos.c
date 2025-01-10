#include <stdio.h>
#include <stdlib.h>
/*
Escrever um algoritmo que recebe 15 numeros reais do usuario, determina e
escreve a soma dos valores positivos e a quantidade de valores negativos
lidos.
*/
int main()
{
    int qtd = 15, cont=1, digitado = 0, negativos = 0;
    float soma = 0;
    do{
        printf("Digte o valor %d\n", cont);
        scanf("%d", &digitado);
        if(digitado >= 0){
            soma += digitado;
        }else{
            negativos++;
        }
        cont++;
    }while(cont <= qtd);
    printf("A soma dos %d valores positivos eh: %.2f\n",qtd, soma);
    printf("A quantidade de valores negativos digitados eh: %d", negativos);
    return 0;
}
