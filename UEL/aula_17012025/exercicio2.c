#include <stdio.h>
#include <stdlib.h>
/*
Escreva um procedimento que recebe um numero como
parametro e diz se esse numero e primo.
*/
void primo(int num);//Protótipo da funcao
void primo2(int num);

int main()
{
    int numero = 0;
    printf("Digite um numero\n");
    scanf("%d", &numero);
    primo2(numero);
    return 0;
}

void primo(int num){
    if(num > 1){
        for(int i=2; i<num/2; i++){
            if(num%i==0){ // Se entrar no IF uma vez eh primo
                printf("O numero nao eh primo\n");
                return;
            }
        }
        printf("O numero EH PRIMO\n");
    }
}

void primo2(int num){ // Contando os divisires
    if(num > 1){
        int contador = 0;
        for(int i=2; i<num/2; i++){
            if(num%i==0){ // Se entrar no IF uma vez eh primo
                contador++;
            }
        }
        if(contador>0){
            printf("O numero nao eh PRIMO\n");
        }else{
            printf("O numero EH PRIMO\n");
        }

    }
}


