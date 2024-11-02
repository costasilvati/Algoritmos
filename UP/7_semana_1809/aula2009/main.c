#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont =1, digitado = 0, erros = 3;
    do{
        printf("Digite a senha \n");
        scanf("%d", &digitado);

        if(digitado == 1786){
            printf("Bom dia!\n");
            //cont = 3;
            break;
        }else{
            erros--;
            printf("Acesso negado! Senha invalido. \n");
            printf("Voce tem %d tentativas \n", erros);
        }
        cont++;
    }while(cont <= 3);
    return 0;
}
