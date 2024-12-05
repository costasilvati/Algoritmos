#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma = 0, media = 0;
    int numDigitado = 0, qtd = 0, cont = 1;

    printf("Quantos numeros deseja digitar?\n");
    scanf("%d", &qtd);
    while(cont <= qtd){
        printf("Digite o valor %d\n", cont);
        scanf("%d", &numDigitado);
        soma += numDigitado;
        //soma = soma + numDigitado;
        cont++;
    }
    media = soma/qtd;
    printf("A media dos valores digitados eh: %.2f \n", media);
    return 0;
}
