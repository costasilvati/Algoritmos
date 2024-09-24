#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, num = 0, maior = 0, menor=0;
    float media = 0.0, soma = 0.0;
    while(i < 10){
        printf("Digite um numero %d \n", i);
        scanf("%d", &num);
        if(num <= 0){
            printf("Numeros negativos nao sao computados \n");
        }else{
            if(i == 0){
                menor = num;
                maior = num;
            }
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
            soma += num;
            i++;
        }
    }
    media = soma/10;
    printf("A media dos valores eh %.2f\n", media);
    printf("Maior valor digitado: %d \n Maior valor digitado %d", maior, menor);
    return 0;
}
