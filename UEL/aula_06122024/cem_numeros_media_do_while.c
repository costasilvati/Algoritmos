#include <stdio.h>
#include <stdlib.h>
/*
Como podemos escrever um programa que recebe 100
numeros como entrada e retorna a media desses numeros?
*/
int main()
{
    int qtd = 0, cont=1, digitado = 0;
    float media = 0, soma = 0;
    printf("Quantos numeros voce deseja digitar\n");
    scanf("%d", &qtd);
    if(qtd > 0){
        do{
            printf("Digte o valor %d\n", cont);
            scanf("%d", &digitado);
            soma += digitado;
            cont++;
        }while(cont <= qtd);
        media = soma/qtd;
        printf("A media dos %d valores digitados eh: %.2f\n", qtd, media);
    }else{
        printf("Digite no minimo 1 numero para o calculo da media\n");
    }

    return 0;
}
